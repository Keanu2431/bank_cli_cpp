//
// Created by Keanu Lumpkin on 4/2/23.
//
#include <string>
#include <utility>
#include <set>
#include <iostream>
#include "../account/AccountHolder.h"
#include "./../../utils/BasicUtilities.h"

#ifndef BANK_CLI_CPP_BANK_H
#define BANK_CLI_CPP_BANK_H


class Bank {
private:
    std::string bank_name;
    std::set<AccountHolder *> account_holders{};
//    METHODS
public:
    Bank(std::string bank_name) : bank_name{std::move(bank_name)} {

    }

    const std::string &get_bank_name() const {
        return bank_name;
    }

    const std::set<AccountHolder *> &get_account_holders() const {
        return account_holders;
    }

    void add_account_holder(AccountHolder *const account_holder){
        if (!(this->account_in_account_holders(*account_holder))) {
            account_holders.insert(account_holder);
            std::cout << account_holder->get_username()
                         + " made an account." << std::endl;
        } else {
            std::cout << account_holder->get_username()
                         + " already has an account." << std::endl;
            delete account_holder;
        }
    };;

    void remove_account_holder(AccountHolder &account_holder) {
        if (this->account_in_account_holders(account_holder)) {
            this->account_holders.erase(&account_holder);
        } else if (!(this->account_in_account_holders(account_holder))) {
            std::cout << "Account Isn't Registered" << std::endl;
        }
    }


private:
    bool account_in_account_holders(AccountHolder &account_holder) {
        for (AccountHolder *acc_h: this->account_holders) {
            if (BasicUtilities::to_uppercase_string(acc_h->get_username()) ==
                BasicUtilities::to_uppercase_string(account_holder.get_username())) {
                std::cout << "Match" << std::endl;
            }
        }
        return false;
    }
};


#endif //BANK_CLI_CPP_BANK_H
