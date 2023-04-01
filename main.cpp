#include <iostream>
#include <string>
#include "./utils/BasicUtilities.h"

static bool continue_app{true};
static int count{0};

int main() {
    std::cout << "Hello, Welcome To My Banking App!" << std::endl;
    std::string option{};
    while (continue_app) {
        std::cout << "What would you like to do?" << std::endl;
        std::getline(std::cin,option);
        BasicUtilities::to_uppercase(option);
        if (option == "OPEN ACCOUNT") {

        } else if (option == "END")
            continue_app = false;
        count++;
    }
    return 0;
}
