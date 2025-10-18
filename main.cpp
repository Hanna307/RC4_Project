#include <iostream>
#include "rc4.h"
int main() {
    std::string key = "secret";
    std::string text = "Hello RC4";
    std::string encrypted = rc4_encrypt(key, text);
    std::string decrypted = rc4_decrypt(key, encrypted);
    std::cout << "Plaintext: " << text << std::endl;
    std::cout << "Encrypted (hex): ";
    for (unsigned char c : encrypted) printf("%02X ", c);
    std::cout << std::endl;
    std::cout << "Decrypted: " << decrypted << std::endl;
    return 0;
}
