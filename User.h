/** 
* @file User.h
* @author Маматкулова Р.А.
* @version 1.0
* @date 21.11.2024
* @copyright ИБСТ ПГУ
* @brief Заголовочный файл для модуля User
*/

#include <string>
#include  <vector>
#include <iostream>

#include "./sha256/sha256.h"

using namespace std;

/** 
* @brief Класс, представляющий информацию о подлюченном пользователе
* @param ID ID подлюченного клиента
* @param hash хэш-код подлюченного клиента
*/
class User{
    private:
        string ID;
        string hash;
    public:
        bool CheckLogin(vector<string> Db_ID);
        bool CheckPassword(vector<string> Db_password, vector<string> Db_ID, string SALT, string SendHash);
        
        string get_ID();
        void set_ID(string ID1);

        string get_hash();
        void set_hash(string hash1);

};
