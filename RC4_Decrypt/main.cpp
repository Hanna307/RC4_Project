#include <iostream>
#include <string>
#include "../rc4.h"

int main() {
    std::string hexCipher;
    std::string key;

    std::cout << "=== RC4 DECRYPTION ===\n";
    std::cout << "Enter key: ";
    std::getline(std::cin, key);

    std::cout << "Enter ciphertext (hex): ";
    std::getline(std::cin, hexCipher);

    std::string ciphertext = RC4::fromHex(hexCipher);
    std::string decrypted = RC4::encrypt(ciphertext, key); // RC4 giải mã = mã hóa lại cùng key

    std::cout << "Decrypted text: " << decrypted << std::endl;

    return 0;
}

