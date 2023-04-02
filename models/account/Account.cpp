//
// Created by Keanu Lumpkin on 4/1/23.
//

#include "Account.h"

#include <utility>

int Account::count{0};

Account::Account(std::string account_number, double balance = 0) :
        account_number{std::move(account_number)}, balance{balance} {
    count++;
}