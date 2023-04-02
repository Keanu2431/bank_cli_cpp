//
// Created by Keanu Lumpkin on 4/1/23.
//

#include "AccountHolder.h"

#include <utility>

int AccountHolder::count{0};

void AccountHolder::create_new_account() {

}

AccountHolder::AccountHolder(std::string username, std::string pin) :
        username{std::move(username)}, pin{std::move(pin)} {
    count++;
}
