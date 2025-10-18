#include "rc4.h"
#include <vector>
#include <algorithm>

std::string rc4_encrypt(const std::string &key, const std::string &plaintext) {
    std::vector<int> S(256);
    for (int i = 0; i < 256; i++) S[i] = i;

    int j = 0;
    for (int i = 0; i < 256; i++) {
        j = (j + S[i] + key[i % key.size()]) % 256;
        std::swap(S[i], S[j]);
    }

    int i = 0; j = 0;
    std::string ciphertext;
    for (char c : plaintext) {
        i = (i + 1) % 256;
        j = (j + S[i]) % 256;
        std::swap(S[i], S[j]);
        int rnd = S[(S[i] + S[j]) % 256];
        ciphertext.push_back(c ^ rnd);
    }
    return ciphertext;
}

std::string rc4_decrypt(const std::string &key, const std::string &ciphertext) {
    // RC4 giải mã cũng giống mã hóa
    return rc4_encrypt(key, ciphertext);
}
