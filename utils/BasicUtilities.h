//
// Created by Keanu Lumpkin on 4/1/23.
//

#include <string>
#include <iostream>

#ifndef BANK_CLI_CPP_BASICUTILITIES_H
#define BANK_CLI_CPP_BASICUTILITIES_H


class BasicUtilities {
public:
    static void to_uppercase(std::string &string) {
        for (char &c: string)
            c = toupper(c);
    }

    static std::string to_uppercase_string(const std::string &string) {
        std::string str{};
        for (char c: string)
            str += c;
        return str;
    }


    static std::string random_alphanumeric(const int len = 32) {
         const char alphanum[] =
                "0123456789"
                "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                "abcdefghijklmnopqrstuvwxyz";
        std::string tmp_string;
        tmp_string.reserve(len);
        for (int i = 0; i < len; ++i) {
            tmp_string += alphanum[rand() % (sizeof(alphanum) - 1)];
        }
        return tmp_string;
    }

};


#endif //BANK_CLI_CPP_BASICUTILITIES_H
