cmake_minimum_required(VERSION 3.24)
project(bank_cli_cpp)

set(CMAKE_CXX_STANDARD 20)

add_executable(bank_cli_cpp main.cpp utils/BasicUtilities.h utils/BasicUtilities.cpp models/account/Account.h models/account/Account.cpp models/account/AccountHolder.h models/account/AccountHolder.cpp models/bank/Bank.h models/bank/Bank.cpp)
