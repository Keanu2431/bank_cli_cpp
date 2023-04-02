//
// Created by Keanu Lumpkin on 4/1/23.
//

#include "Account.h"

int Account::count{0};

Account::Account(std::string account_number) :
        account_number{account_number} {
    count++;
}