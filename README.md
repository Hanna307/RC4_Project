# RC4 Encryption & Decryption

## Giới thiệu
Dự án này thực hiện **mã hóa và giải mã chuỗi ký tự** bằng thuật toán **RC4**.  
RC4 là một thuật toán mã hóa dòng (stream cipher) phổ biến, hoạt động bằng cách sinh chuỗi khóa giả ngẫu nhiên để XOR với dữ liệu gốc.

---

## Cấu trúc thư mục

---

## Cách biên dịch và chạy

### Mã hóa
```bash
cd RC4_Encrypt
g++ main.cpp rc4_encrypt.cpp -o encrypt
./encrypt

cd RC4_Decrypt
g++ main.cpp rc4_decrypt.cpp -o decrypt
./decrypt



