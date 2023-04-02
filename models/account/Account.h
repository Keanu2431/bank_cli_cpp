//
// Created by Keanu Lumpkin on 4/1/23.
//
#include <string>

#ifndef BANK_CLI_CPP_ACCOUNT_H
#define BANK_CLI_CPP_ACCOUNT_H


class Account {
    static int count;
private:
    std::string account_number;
    double balance{0};
public:
    Account(std::string account_number);
};


#endif //BANK_CLI_CPP_ACCOUNT_H
