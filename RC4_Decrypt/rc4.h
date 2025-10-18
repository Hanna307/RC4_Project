#ifndef RC4_H
#define RC4_H
#include <string>
std::string rc4_encrypt(const std::string &key, const std::string &plaintext);
std::string rc4_decrypt(const std::string &key, const std::string &ciphertext);
#endif