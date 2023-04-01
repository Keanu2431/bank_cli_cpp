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
};


#endif //BANK_CLI_CPP_BASICUTILITIES_H