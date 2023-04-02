//
// Created by Keanu Lumpkin on 4/2/23.
//
#include <string>
#include <utility>
#include <set>
#include <iostream>

#ifndef BANK_CLI_CPP_BANK_H
#define BANK_CLI_CPP_BANK_H

#include "./../../utils/BasicUtilities.h"
#include "../account/AccountHolder.h"

class Bank {
private:
    std::string bank_name;
    std::set<AccountHolder *> account_holders{};
//    METHODS
public:
    Bank(std::string bank_name) : bank_name{std::move(bank_name)},account_holders() {

    }

    const std::string &get_bank_name() const {
        return bank_name;
    }

    const std::set<AccountHolder *> &get_account_holders() const {
        return account_holders;
    }

    void add_account_holder(AccountHolder *const account_holder);

    void remove_account_holder(AccountHolder &account_holder);

private:
    bool account_in_account_holders(AccountHolder &account_holder);
};


#endif //BANK_CLI_CPP_BANK_H
