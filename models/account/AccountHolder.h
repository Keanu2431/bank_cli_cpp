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
    static int count;
public:
    AccountHolder(std::string username, std::string pin);

    void create_new_account();

    std::string get_username() {
        return this->username;
    }
};


#endif //BANK_CLI_CPP_ACCOUNTHOLDER_H
