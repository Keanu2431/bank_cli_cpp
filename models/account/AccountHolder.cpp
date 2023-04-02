//
// Created by Keanu Lumpkin on 4/1/23.
//

#include "AccountHolder.h"
#include <iostream>
#include <utility>

int AccountHolder::count{0};

AccountHolder::AccountHolder(std::string username, std::string pin) :
        username{std::move(username)}, pin{std::move(pin)} {
    count++;
}

void AccountHolder::open_new_account(Account &account) {
    this->accounts.insert(&account);
    std::cout << "Account " + account.get_account_number() +
                 " opened." << std::endl;
}
