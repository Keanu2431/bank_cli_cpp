//
// Created by Keanu Lumpkin on 4/1/23.
//
#include <set>
#include <string>
#include "./Account.h"

#ifndef BANK_CLI_CPP_ACCOUNTHOLDER_H
#define BANK_CLI_CPP_ACCOUNTHOLDER_H


class AccountHolder {
private:
    std::set<Account *> accounts{};
    std::string username;
    std::string pin;
    static int count;
public:
    AccountHolder(std::string username, std::string pin);

    void open_new_account(Account &account);

    std::string get_username() {
        return this->username;
    }
};


#endif //BANK_CLI_CPP_ACCOUNTHOLDER_H
