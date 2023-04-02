#include <iostream>
#include <string>
#include "./utils/BasicUtilities.h"
#include "models/bank/Bank.h"


static bool continue_app{true};
static int count{0};

// * point to address
// * deferencing get the variable it's * address is pointing ro
// & returns the address of the variable said in question
int main() {
    Bank *chase_bank = new Bank("J.P Morgan Chase");
    AccountHolder *global_account = {nullptr};
    std::cout << "Hello, Welcome To My Banking App!" << std::endl;

    std::string option{};

    while (continue_app) {
        std::cout << "What would you like to do?" << std::endl;
        std::getline(std::cin, option);
        BasicUtilities::to_uppercase(option);
        if (option == "OPEN ACCOUNT") {
            if (global_account != nullptr) {
                Account *account = new Account(BasicUtilities::random_alphanumeric(),0);
                global_account->open_new_account(*account);
            } else
                std::cout << "There is no registered account" << std::endl;
        }
        else if (option == "JOIN BANK") {
            std::string username;
            std::string pin;
            std::cout << "What is your username?" << std::endl;
            std::cin >> username;
            std::cout << "What is your pin?" << std::endl;
            std::cin >> pin;

            AccountHolder *account_holder = new AccountHolder(username, pin);

            chase_bank->add_account_holder(account_holder);

            global_account = account_holder;
        }
        else if (option == "END")
            continue_app = false;
        count++;
    }
    return 0;
}
