/**
 * @file sha256.cpp
 */

#include "sha256.h"
/**
* @brief Получение хэш-кода по алгоритму sha256
* @param msg сообщения для хэширования
* @return хэш-код
*/

std::string SHA256_hash(std::string msg)
{
    std::cout << "В США ХЭН ПРИШЛО: " << msg<<std::endl;
    namespace CPP = CryptoPP;
    
    CPP::SHA256 hash;                        
    CPP::byte digest[CryptoPP::SHA256::DIGESTSIZE];
    hash.CalculateDigest(digest, (const CPP::byte*)msg.data(), msg.size());
    std::string Hash;
    CryptoPP::StringSource(digest, sizeof(digest), true, new CryptoPP::HexEncoder(new CryptoPP::StringSink(Hash)));
    return Hash;
}
