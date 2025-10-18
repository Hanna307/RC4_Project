#include <iostream>
#include <string>
#include "../rc4.h"   // đường dẫn đến file header RC4

int main() {
    std::string plaintext;
    std::string key;

    std::cout << "=== RC4 ENCRYPTION ===\n";
    std::cout << "Enter key: ";
    std::getline(std::cin, key);

    std::cout << "Enter plaintext: ";
    std::getline(std::cin, plaintext);

    std::string ciphertext = RC4::encrypt(plaintext, key);
    std::cout << "Ciphertext (hex): " << RC4::toHex(ciphertext) << std::endl;

    return 0;
}

