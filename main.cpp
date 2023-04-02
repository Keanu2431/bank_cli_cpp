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

    AccountHolder *keanu = new AccountHolder("Keanu2431", "5532");

    chase_bank->add_account_holder(keanu);

    for (AccountHolder *account_holder: chase_bank->get_account_holders()) {
        std::cout << account_holder->get_username() << std::endl;
    }

    std::cout << "Hello, Welcome To My Banking App!" << std::endl;
    std::string option{};
    while (continue_app) {
        std::cout << "What would you like to do?" << std::endl;
        std::getline(std::cin, option);
        BasicUtilities::to_uppercase(option);
        if (option == "OPEN ACCOUNT") {

        } else if (option == "JOIN BANK") {

        } else if (option == "END")
            continue_app = false;
        count++;
    }
    return 0;
}
