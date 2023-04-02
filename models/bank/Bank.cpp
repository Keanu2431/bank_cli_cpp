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
