# Name Comparison Engine

This project implements a high-performance phonetic name comparison engine in C++ using SIMD (AVX/AVX512) and multithreading.  

---

## 🔍 Idea

In face comparison, a face is converted into a feature vector, where each axis represents a specific trait (e.g., lip shape, eye distance). Comparison is then performed using cosine similarity.

I applied the same concept to names.

- A name is broken down into phoneme pairs.
- Each phoneme pair corresponds to a unique axis in a fixed-size vector.
- The name is thus represented as a high-dimensional feature vector.
- Similarity is computed via a **modified cosine distance**, taking vector length into account.

---

## ⚙️ How It Works

1. **Phonetic Encoding**  
   Names are converted into a normalized sound signature using a custom mapping across multiple alphabets (Latin, Cyrillic, Armenian).

2. **Vector Generation**  
   For each adjacent phoneme pair, a specific index in the vector is incremented. This results in a unique “sound vector” for each name.

3. **Distance Calculation**  
   The vectors are compared using AVX instructions for acceleration. A modified cosine distance is used to account for vector magnitude (word length sensitivity).
   Standard cosine similarity was not suitable, as it ignored vector length — but in my algorithm, name length directly affects vector size. I replaced it with a modified formula:
   (A · B) / max(||A||, ||B||)²,
   which preserves direction while penalizing mismatched lengths.

5. **Multithreading**  
   Vector comparison is parallelized across threads, achieving significant speedup on large datasets (2M+ comparisons per batch).

---


## 📦 Technologies Used

- C++
- AVX2
- Multithreading
- Custom phonetic mapping logic
