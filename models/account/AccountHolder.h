//
// Created by Keanu Lumpkin on 4/1/23.
//
#include <vector>
#include <string>
#include "./Account.h"

#ifndef BANK_CLI_CPP_ACCOUNTHOLDER_H
#define BANK_CLI_CPP_ACCOUNTHOLDER_H


class AccountHolder {
private:
    std::vector<Account> accounts;
    std::string username;
    std::string pin;
public:
    void create_new_account();
};


#endif //BANK_CLI_CPP_ACCOUNTHOLDER_H
