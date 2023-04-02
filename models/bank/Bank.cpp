//
// Created by Keanu Lumpkin on 4/2/23.
//

#include "Bank.h"

void Bank::add_account_holder(AccountHolder *const account_holder) {
    if (!(this->account_in_account_holders(*account_holder))) {
        account_holders.insert(account_holder);
        std::cout << account_holder->get_username()
                     + " made an account." << std::endl;
    } else {
        std::cout << account_holder->get_username()
                     + " already has an account." << std::endl;
        delete account_holder;
    }
}

bool Bank::account_in_account_holders(AccountHolder &account_holder) {
    {
        for (AccountHolder *acc_h: this->account_holders) {
            if (BasicUtilities::to_uppercase_string(acc_h->get_username()) ==
                BasicUtilities::to_uppercase_string(account_holder.get_username())) {
                std::cout << "Match" << std::endl;
                return true;
            }
        }
        return false;
    }
}

void Bank::remove_account_holder(AccountHolder &account_holder)  {
    if (this->account_in_account_holders(account_holder)) {
        this->account_holders.erase(&account_holder);
    } else if (!(this->account_in_account_holders(account_holder))) {
        std::cout << "Account Isn't Registered" << std::endl;
    }
}
