//---------------------NAME COMPARE START-----------

//---------------------VECTOR COMPARE START-----------

string replace_sound(string word, string from, string to, bool f){
	if (from.empty()){
		return word;
	}
	size_t startPos = 0;
    while ((startPos = word.find(from, startPos)) != string::npos) {
		if (f && (startPos == 0)){
        	word.replace(startPos, from.length(), to);
        	startPos += to.length();
			break;
		} else if (!f){
			word.replace(startPos, from.length(), to);
        	startPos += to.length();
		} else {
			break;
		}
    }
	return word;
}

string word_to_sound(string word){
	word = " " + word + " ";
	string sound = word;
	sound = replace_sound(sound, "A", "A", false);
	sound = replace_sound(sound, "a", "A", false);
	sound = replace_sound(sound, "B", "B", false);
	sound = replace_sound(sound, "b", "B", false);
	sound = replace_sound(sound, "D", "D", false);
	sound = replace_sound(sound, "d", "D", false);
	sound = replace_sound(sound, "Y", "1", false);
	sound = replace_sound(sound, "y", "1", false);
	sound = replace_sound(sound, "J", "Y", false);
	sound = replace_sound(sound, "j", "Y", false);
	sound = replace_sound(sound, "W", "a", false);
	sound = replace_sound(sound, "w", "a", false);
	sound = replace_sound(sound, "I", "J", false);
	sound = replace_sound(sound, "i", "J", false);
	sound = replace_sound(sound, "F", "i", false);
	sound = replace_sound(sound, "f", "i", false);
	sound = replace_sound(sound, "E", "F", false);
	sound = replace_sound(sound, "e", "F", false);
	sound = replace_sound(sound, "U", "e", false);
	sound = replace_sound(sound, "u", "e", false);
	sound = replace_sound(sound, "N", "U", false);
	sound = replace_sound(sound, "n", "U", false);
	sound = replace_sound(sound, "EE", "J", false);
	sound = replace_sound(sound, "eE", "J", false);
	sound = replace_sound(sound, "Ee", "J", false);
	sound = replace_sound(sound, "ee", "J", false);
	sound = replace_sound(sound, "CH", "W", false);
	sound = replace_sound(sound, "cH", "W", false);
	sound = replace_sound(sound, "Ch", "W", false);
	sound = replace_sound(sound, "ch", "W", false);
	sound = replace_sound(sound, "CK", "N", false);
	sound = replace_sound(sound, "cK", "N", false);
	sound = replace_sound(sound, "Ck", "N", false);
	sound = replace_sound(sound, "ck", "N", false);
	sound = replace_sound(sound, "Q", "N", false);
	sound = replace_sound(sound, "q", "N", false);
	sound = replace_sound(sound, "DG", "Y", false);
	sound = replace_sound(sound, "dG", "Y", false);
	sound = replace_sound(sound, "Dg", "Y", false);
	sound = replace_sound(sound, "dg", "Y", false);
	sound = replace_sound(sound, "X", "Ny", false);
	sound = replace_sound(sound, "x", "Ny", false);
	sound = replace_sound(sound, "PH", "i", false);
	sound = replace_sound(sound, "pH", "i", false);
	sound = replace_sound(sound, "Ph", "i", false);
	sound = replace_sound(sound, "ph", "i", false);
	sound = replace_sound(sound, "P", "X", false);
	sound = replace_sound(sound, "p", "X", false);
	sound = replace_sound(sound, "DZ", "P", false);
	sound = replace_sound(sound, "dZ", "P", false);
	sound = replace_sound(sound, "Dz", "P", false);
	sound = replace_sound(sound, "dz", "P", false);
	sound = replace_sound(sound, "KH", "3", false);
	sound = replace_sound(sound, "kH", "3", false);
	sound = replace_sound(sound, "Kh", "3", false);
	sound = replace_sound(sound, "kh", "3", false);
	sound = replace_sound(sound, "GH", "Q", false);
	sound = replace_sound(sound, "gH", "Q", false);
	sound = replace_sound(sound, "Gh", "Q", false);
	sound = replace_sound(sound, "gh", "Q", false);
	sound = replace_sound(sound, "K", "N", false);
	sound = replace_sound(sound, "k", "N", false);
	sound = replace_sound(sound, "LL", "K", false);
	sound = replace_sound(sound, "lL", "K", false);
	sound = replace_sound(sound, "Ll", "K", false);
	sound = replace_sound(sound, "ll", "K", false);
	sound = replace_sound(sound, "L", "K", false);
	sound = replace_sound(sound, "l", "K", false);
	sound = replace_sound(sound, "V", "a", false);
	sound = replace_sound(sound, "v", "a", false);
	sound = replace_sound(sound, "SH", "V", false);
	sound = replace_sound(sound, "sH", "V", false);
	sound = replace_sound(sound, "Sh", "V", false);
	sound = replace_sound(sound, "sh", "V", false);
	sound = replace_sound(sound, "SS", "y", false);
	sound = replace_sound(sound, "sS", "y", false);
	sound = replace_sound(sound, "Ss", "y", false);
	sound = replace_sound(sound, "ss", "y", false);
	sound = replace_sound(sound, "TH", "D", false);
	sound = replace_sound(sound, "tH", "D", false);
	sound = replace_sound(sound, "Th", "D", false);
	sound = replace_sound(sound, "th", "D", false);
	sound = replace_sound(sound, "TS", "d", false);
	sound = replace_sound(sound, "tS", "d", false);
	sound = replace_sound(sound, "Ts", "d", false);
	sound = replace_sound(sound, "ts", "d", false);
	sound = replace_sound(sound, "TZ", "d", false);
	sound = replace_sound(sound, "tZ", "d", false);
	sound = replace_sound(sound, "Tz", "d", false);
	sound = replace_sound(sound, "tz", "d", false);
	sound = replace_sound(sound, "ZH", "I", false);
	sound = replace_sound(sound, "zH", "I", false);
	sound = replace_sound(sound, "Zh", "I", false);
	sound = replace_sound(sound, "zh", "I", false);
	sound = replace_sound(sound, "C", "d", false);
	sound = replace_sound(sound, "c", "d", false);
	sound = replace_sound(sound, "G", "C", false);
	sound = replace_sound(sound, "g", "C", false);
	sound = replace_sound(sound, "H", "2", false);
	sound = replace_sound(sound, "h", "2", false);
	sound = replace_sound(sound, "S", "y", false);
	sound = replace_sound(sound, "s", "y", false);
	sound = replace_sound(sound, "M", "S", false);
	sound = replace_sound(sound, "m", "S", false);
	sound = replace_sound(sound, "O", "h", false);
	sound = replace_sound(sound, "o", "h", false);
	sound = replace_sound(sound, "R", "c", false);
	sound = replace_sound(sound, "r", "c", false);
	sound = replace_sound(sound, "T", "H", false);
	sound = replace_sound(sound, "t", "H", false);
	sound = replace_sound(sound, "Z", "E", false);
	sound = replace_sound(sound, "z", "E", false);
	sound = replace_sound(sound, "А", "A", false);
	sound = replace_sound(sound, "а", "A", false);
	sound = replace_sound(sound, "Б", "B", false);
	sound = replace_sound(sound, "б", "B", false);
	sound = replace_sound(sound, "В", "a", false);
	sound = replace_sound(sound, "в", "a", false);
	sound = replace_sound(sound, "Г", "C", false);
	sound = replace_sound(sound, "г", "C", false);
	sound = replace_sound(sound, "ДЖ", "Y", false);
	sound = replace_sound(sound, "дЖ", "Y", false);
	sound = replace_sound(sound, "Дж", "Y", false);
	sound = replace_sound(sound, "дж", "Y", false);
	sound = replace_sound(sound, "ДЗ", "P", false);
	sound = replace_sound(sound, "дЗ", "P", false);
	sound = replace_sound(sound, "Дз", "P", false);
	sound = replace_sound(sound, "дз", "P", false);
	sound = replace_sound(sound, "Д", "D", false);
	sound = replace_sound(sound, "д", "D", false);
	sound = replace_sound(sound, "Е", "1F", true);
	sound = replace_sound(sound, "е", "1F", true);
	sound = replace_sound(sound, "Е", "F", false);
	sound = replace_sound(sound, "е", "F", false);
	sound = replace_sound(sound, "Ё", "1h", false);
	sound = replace_sound(sound, "ё", "1h", false);
	sound = replace_sound(sound, "Ж", "I", false);
	sound = replace_sound(sound, "ж", "I", false);
	sound = replace_sound(sound, "З", "E", false);
	sound = replace_sound(sound, "з", "E", false);
	sound = replace_sound(sound, "И", "J", false);
	sound = replace_sound(sound, "и", "J", false);
	sound = replace_sound(sound, "Й", "J", false);
	sound = replace_sound(sound, "й", "J", false);
	sound = replace_sound(sound, "К", "N", false);
	sound = replace_sound(sound, "к", "N", false);
	sound = replace_sound(sound, "Л", "K", false);
	sound = replace_sound(sound, "л", "K", false);
	sound = replace_sound(sound, "М", "S", false);
	sound = replace_sound(sound, "м", "S", false);
	sound = replace_sound(sound, "Н", "U", false);
	sound = replace_sound(sound, "н", "U", false);
	sound = replace_sound(sound, "О", "h", false);
	sound = replace_sound(sound, "о", "h", false);
	sound = replace_sound(sound, "П", "X", false);
	sound = replace_sound(sound, "п", "X", false);
	sound = replace_sound(sound, "Р", "c", false);
	sound = replace_sound(sound, "р", "c", false);
	sound = replace_sound(sound, "С", "y", false);
	sound = replace_sound(sound, "с", "y", false);
	sound = replace_sound(sound, "Т", "H", false);
	sound = replace_sound(sound, "т", "H", false);
	sound = replace_sound(sound, "У", "e", false);
	sound = replace_sound(sound, "у", "e", false);
	sound = replace_sound(sound, "Ф", "i", false);
	sound = replace_sound(sound, "ф", "i", false);
	sound = replace_sound(sound, "Х", "3", false);
	sound = replace_sound(sound, "х", "3", false);
	sound = replace_sound(sound, "Ц", "d", false);
	sound = replace_sound(sound, "ц", "d", false);
	sound = replace_sound(sound, "Ч", "W", false);
	sound = replace_sound(sound, "ч", "W", false);
	sound = replace_sound(sound, "Ш", "V", false);
	sound = replace_sound(sound, "ш", "V", false);
	sound = replace_sound(sound, "Щ", "VW", false);
	sound = replace_sound(sound, "щ", "VW", false);
	sound = replace_sound(sound, "Ы", "1", false);
	sound = replace_sound(sound, "ы", "1", false);
	sound = replace_sound(sound, "Ь", "", false);
	sound = replace_sound(sound, "ь", "", false);
	sound = replace_sound(sound, "Ъ", "", false);
	sound = replace_sound(sound, "ъ", "", false);
	sound = replace_sound(sound, "Э", "F", false);
	sound = replace_sound(sound, "э", "F", false);
	sound = replace_sound(sound, "Ю", "1e", false);
	sound = replace_sound(sound, "ю", "1e", false);
	sound = replace_sound(sound, "Я", "1A", false);
	sound = replace_sound(sound, "я", "1A", false);
	sound = replace_sound(sound, "Ա", "A", false);
	sound = replace_sound(sound, "ա", "A", false);
	sound = replace_sound(sound, "Բ", "B", false);
	sound = replace_sound(sound, "բ", "B", false);
	sound = replace_sound(sound, "Վ", "a", false);
	sound = replace_sound(sound, "վ", "a", false);
	sound = replace_sound(sound, "Գ", "C", false);
	sound = replace_sound(sound, "գ", "C", false);
	sound = replace_sound(sound, "Դ", "D", false);
	sound = replace_sound(sound, "դ", "D", false);
	sound = replace_sound(sound, "Ջ", "Y", false);
	sound = replace_sound(sound, "ջ", "Y", false);
	sound = replace_sound(sound, "Ձ", "P", false);
	sound = replace_sound(sound, "ձ", "P", false);
	sound = replace_sound(sound, "ԵՒ", "1Fa", false);
	sound = replace_sound(sound, "եՒ", "1Fa", false);
	sound = replace_sound(sound, "Եւ", "1Fa", false);
	sound = replace_sound(sound, "եւ", "1Fa", false);
	sound = replace_sound(sound, "Ե", "1F", true);
	sound = replace_sound(sound, "ե", "1F", true);
	sound = replace_sound(sound, "Ե", "F", false);
	sound = replace_sound(sound, "ե", "F", false);
	sound = replace_sound(sound, "ՈՒ", "e", false);
	sound = replace_sound(sound, "ոՒ", "e", false);
	sound = replace_sound(sound, "Ու", "e", false);
	sound = replace_sound(sound, "ու", "e", false);
	sound = replace_sound(sound, "Ո", "ah", true);
	sound = replace_sound(sound, "ո", "ah", true);
	sound = replace_sound(sound, "Ւ", "J", false);
	sound = replace_sound(sound, "ւ", "J", false);
	sound = replace_sound(sound, "Ո", "h", false);
	sound = replace_sound(sound, "ո", "h", false);
	sound = replace_sound(sound, "Ժ", "I", false);
	sound = replace_sound(sound, "ժ", "I", false);
	sound = replace_sound(sound, "Զ", "E", false);
	sound = replace_sound(sound, "զ", "E", false);
	sound = replace_sound(sound, "Ի", "J", false);
	sound = replace_sound(sound, "ի", "J", false);
	sound = replace_sound(sound, "Կ", "N", false);
	sound = replace_sound(sound, "կ", "N", false);
	sound = replace_sound(sound, "Ք", "N", false);
	sound = replace_sound(sound, "ք", "N", false);
	sound = replace_sound(sound, "Հ", "2", false);
	sound = replace_sound(sound, "հ", "2", false);
	sound = replace_sound(sound, "Լ", "K", false);
	sound = replace_sound(sound, "լ", "K", false);
	sound = replace_sound(sound, "Մ", "S", false);
	sound = replace_sound(sound, "մ", "S", false);
	sound = replace_sound(sound, "Ն", "U", false);
	sound = replace_sound(sound, "ն", "U", false);
	sound = replace_sound(sound, "Օ", "h", false);
	sound = replace_sound(sound, "օ", "h", false);
	sound = replace_sound(sound, "Պ", "X", false);
	sound = replace_sound(sound, "պ", "X", false);
	sound = replace_sound(sound, "Փ", "X", false);
	sound = replace_sound(sound, "փ", "X", false);
	sound = replace_sound(sound, "Ռ", "c", false);
	sound = replace_sound(sound, "ռ", "c", false);
	sound = replace_sound(sound, "Ր", "c", false);
	sound = replace_sound(sound, "ր", "c", false);
	sound = replace_sound(sound, "Ս", "y", false);
	sound = replace_sound(sound, "ս", "y", false);
	sound = replace_sound(sound, "Թ", "H", false);
	sound = replace_sound(sound, "թ", "H", false);
	sound = replace_sound(sound, "Տ", "H", false);
	sound = replace_sound(sound, "տ", "H", false);
	sound = replace_sound(sound, "Ֆ", "i", false);
	sound = replace_sound(sound, "ֆ", "i", false);
	sound = replace_sound(sound, "Խ", "3", false);
	sound = replace_sound(sound, "խ", "3", false);
	sound = replace_sound(sound, "Ղ", "3", false);
	sound = replace_sound(sound, "ղ", "3", false);
	sound = replace_sound(sound, "Ծ", "d", false);
	sound = replace_sound(sound, "ծ", "d", false);
	sound = replace_sound(sound, "Ց", "d", false);
	sound = replace_sound(sound, "ց", "d", false);
	sound = replace_sound(sound, "Ճ", "W", false);
	sound = replace_sound(sound, "ճ", "W", false);
	sound = replace_sound(sound, "Չ", "W", false);
	sound = replace_sound(sound, "չ", "W", false);
	sound = replace_sound(sound, "Շ", "V", false);
	sound = replace_sound(sound, "շ", "V", false);
	sound = replace_sound(sound, "Յ", "1", false);
	sound = replace_sound(sound, "յ", "1", false);
	sound = replace_sound(sound, "Ը", "1A", false);
	sound = replace_sound(sound, "ը", "1A", false);
	sound = replace_sound(sound, "և", "1Fa", false);
	sound = replace_sound(sound, "Է", "F", false);
	sound = replace_sound(sound, "է", "F", false);

	return sound;
}

string sound_obr(string sound){
	string obr_sound;
	for (int i = 0; i<(int)sound.length()-1; i++){
		if (sound[i] == sound[i+1]){
			continue;
		}
		obr_sound += sound[i];
	}
	if (sound[sound.length()-1] != sound[sound.length()-2]){
		obr_sound += sound[sound.length()-1];
	}
    if (obr_sound.length() < 2){
        obr_sound = {' ', ' '};
    }
	return obr_sound;
}

void sound_to_vector(string sound, float vector[]){
	unsigned char sound1;
	unsigned char sound2;
	unsigned char id1;
	unsigned char id2;
	unsigned short int id;
	unsigned short int sid;
	for (int i = 0; i<(int)sound.length()-1; i++){
		sound1 = sound[i];
		sound2 = sound[i+1];
		id1 = (unsigned int)sound1;
		id2 = (unsigned int)sound2;
		sid = static_cast<unsigned short int>(id1 << 8 | id2);
		id = character_to_vector[sid];
		vector[id] += 10;
	}
}

float calculateVectorDist(const float vector[], int start, int end) {
    const int simdSize = 8;
    const int iterations = (end - start) / simdSize;

    __m256 sum = _mm256_setzero_ps();

    for (int i = start; i < start + iterations * simdSize; i += simdSize) {
        __m256 vec1 = _mm256_loadu_ps(&vector[i]);
        __m256 vec2 = _mm256_loadu_ps(&vector[i]);
        __m256 prod = _mm256_mul_ps(vec1, vec2);
        sum = _mm256_add_ps(sum, prod);
    }

    float dotProduct = 0.0f;
    alignas(32) float sumArray[simdSize];
    _mm256_store_ps(sumArray, sum);

    for (int j = 0; j < simdSize; ++j) {
        dotProduct += sumArray[j];
    }

    for (int i = start + iterations * simdSize; i < end; ++i) {
        dotProduct += vector[i] * vector[i];
    }

    return dotProduct;
}

float calculateVectorDistParallel(const float vector[]) {
    float localDotProducts[THREAD_COUNT] = {0.0f};
    thread threads[THREAD_COUNT];

    int chunkSize = VECTOR_SIZE / THREAD_COUNT;
    int remainder = VECTOR_SIZE % THREAD_COUNT;
    int start = 0;
    int end = chunkSize;

    for (int i = 0; i < THREAD_COUNT - 1; ++i) {
        threads[i] = thread([&](int start, int end, float& localDotProduct) {
            localDotProduct = calculateVectorDist(vector, start, end);
        }, start, end, ref(localDotProducts[i]));

        start += chunkSize;
        end += chunkSize;
    }

    threads[THREAD_COUNT - 1] = thread([&](int start, int end, float& localDotProduct) {
        localDotProduct = calculateVectorDist(vector, start, end);
    }, start, end + remainder, ref(localDotProducts[THREAD_COUNT - 1]));

    for (int i = 0; i < THREAD_COUNT; ++i) {
        threads[i].join();
    }

    float dotProduct = 0.0f;
    for (int i = 0; i < THREAD_COUNT; ++i) {
        dotProduct += localDotProducts[i];
    }

    return dotProduct;
}

void fillArray(float* array, int startIndex, int endIndex) {
    int simdSize = 8;
    int simdIterations = (endIndex - startIndex) / simdSize;

    for (int i = startIndex; i < startIndex + simdIterations * simdSize; i += simdSize) {
        __m256 zero = _mm256_setzero_ps();
        _mm256_storeu_ps(array + i, zero);
    }

    for (int i = startIndex + simdIterations * simdSize; i < endIndex; i++) {
        array[i] = 0.0f;
    }
}

void fillArrayParallel(float* array) {
    int chunkSize = VECTOR_SIZE / THREAD_COUNT;
    vector<thread> threads(THREAD_COUNT);

    for (int i = 0; i < THREAD_COUNT; i++) {
        int startIndex = i * chunkSize;
        int endIndex = (i == THREAD_COUNT - 1) ? VECTOR_SIZE : (i + 1) * chunkSize;
        threads[i] = thread(fillArray, array, startIndex, endIndex);
    }

    for (int i = 0; i < THREAD_COUNT; i++) {
        threads[i].join();
    }
}

float calculateDotProduct(const float vector1[], const float vector2[], int start, int end) {
    const int simdSize = 8;
    const int iterations = (end - start) / simdSize;

    __m256 sum = _mm256_setzero_ps();

    for (int i = start; i < start + iterations * simdSize; i += simdSize) {
        __m256 vec1 = _mm256_loadu_ps(&vector1[i]);
        __m256 vec2 = _mm256_loadu_ps(&vector2[i]);
        __m256 prod = _mm256_mul_ps(vec1, vec2);
        sum = _mm256_add_ps(sum, prod);
    }

    float dotProduct = 0.0f;
    alignas(32) float sumArray[simdSize];
    _mm256_store_ps(sumArray, sum);

    for (int j = 0; j < simdSize; ++j) {
        dotProduct += sumArray[j];
    }

    for (int i = start + iterations * simdSize; i < end; ++i) {
        dotProduct += vector1[i] * vector2[i];
    }

    return dotProduct;
}

float calculateDotProductParallel(const float vector1[], const float vector2[], float dist1, float dist2) {
    float localDotProducts[THREAD_COUNT] = {0.0f};
    thread threads[THREAD_COUNT];

    int chunkSize = VECTOR_SIZE / THREAD_COUNT;
    int remainder = VECTOR_SIZE % THREAD_COUNT;
    int start = 0;
    int end = chunkSize;

    for (int i = 0; i < THREAD_COUNT - 1; ++i) {
        threads[i] = thread([&](int start, int end, float& localDotProduct) {
            localDotProduct = calculateDotProduct(vector1, vector2, start, end);
        }, start, end, ref(localDotProducts[i]));

        start += chunkSize;
        end += chunkSize;
    }

    threads[THREAD_COUNT - 1] = thread([&](int start, int end, float& localDotProduct) {
        localDotProduct = calculateDotProduct(vector1, vector2, start, end);
    }, start, end + remainder, ref(localDotProducts[THREAD_COUNT - 1]));

    for (int i = 0; i < THREAD_COUNT; ++i) {
        threads[i].join();
    }

    float dotProduct = 0.0f;
    for (int i = 0; i < THREAD_COUNT; ++i) {
        dotProduct += localDotProducts[i];
    }

    return dotProduct / max(dist1, dist2);
}

float raisedProduct(const std::vector<float>& numbers) {
    if (numbers.empty()) {
        return 0.0f;
    }

    float product = 1.0f;
    for (float value : numbers) {
        product *= value;
    }

    return product;
}

float compare_date(string date1, string date2){
    float result = 1;
    if ((date1[0] ^ date2[0]) != 0){
        result -= 0.1;
    }
    if ((date1[1] ^ date2[1]) != 0){
        result -= 0.1;
    }
    if ((date1[2] ^ date2[2]) != 0){
        result -= 0.1;
    }
    if ((date1[3] ^ date2[3]) != 0){
        result -= 0.1;
    }
    if ((date1[5] ^ date2[5]) != 0){
        result -= 0.1;
    }
    if ((date1[6] ^ date2[6]) != 0){
        result -= 0.1;
    }
    if ((date1[8] ^ date2[8]) != 0){
        result -= 0.1;
    }
    if ((date1[9] ^ date2[9]) != 0){
        result -= 0.1;
    }
    return result;
}

vector<float> compare(vector<component> f, vector<component> s, vector<float> results){
    int f_id;
    int s_id;
    int lenf = f.size();
    int lens = s.size();
    bool in_for = true;
    float max_res = -1;
    for (int i = 0; i < lenf; i++){
        if (f[i].active_id){
            for (int j = 0; j < lens; j++){
                if (s[j].active_id){
                    in_for = false;
                    const float* fv = f[i].vector;
                    const float* sv = s[j].vector;
                    float res = calculateDotProductParallel(fv, sv, f[i].dist, s[j].dist);
                    if (res > max_res){
                        max_res = res;
                        f_id = i;
                        s_id = j;
                    }
                }
            }
        }
    }
    if (in_for){
        return results;
    }
    results.push_back(max_res);
    f[f_id].active_id = 0;
    s[s_id].active_id = 0;
    return compare(f, s, results);
}

//---------------------VECTOR COMPARE END-----------

//---------------------NAME COMPARE ALGORITHM START-----------

float compare_name1_2(string name1_dirty, string date1, string name2_dirty, string date2){
    string name1_clean = clean_string(name1_dirty);
    string name2_clean = clean_string(name2_dirty);

    vector<string> name1_arr = splitString(name1_clean, ' ');
    vector<string> name2_arr = splitString(name2_clean, ' ');

    vector<component> name1_vec;
    vector<component> name2_vec;

    string sound;
    string obr_sound;
    float dist;

    for (int i = 0; i<(int)name1_arr.size(); i++){
        sound = word_to_sound(name1_arr[i]);
        obr_sound = sound_obr(sound);
        float* vector = new float[VECTOR_SIZE];
        fillArrayParallel(vector);
        sound_to_vector(obr_sound, vector);
        dist = calculateVectorDistParallel(vector);
        component temp;
        temp.vector = vector;
        temp.dist = dist;
        temp.active_id = 1;
        name1_vec.push_back(temp);
    }

    for (int i = 0; i<(int)name2_arr.size(); i++){
        sound = word_to_sound(name2_arr[i]);
        obr_sound = sound_obr(sound);
        float* vector = new float[VECTOR_SIZE];
        fillArrayParallel(vector);
        sound_to_vector(obr_sound, vector);
        dist = calculateVectorDistParallel(vector);
        component temp;
        temp.vector = vector;
        temp.dist = dist;
        temp.active_id = 1;
        name2_vec.push_back(temp);
    }

    vector<float> results;
    results = compare(name1_vec, name2_vec, results);
    float name_k = raisedProduct(results);
    float date_k = compare_date(date1, date2);
    float final_r = name_k * date_k;

    for (int i = 0; i<(int)name1_vec.size(); i++){
        delete[] name1_vec[i].vector;
    }
    for (int i = 0; i<(int)name2_vec.size(); i++){
        delete[] name2_vec[i].vector;
    }

    return final_r;
}

//---------------------NAME COMPARE ALGORITHM END-----------

//---------------------NAME COMPARE END-----------
