#include <iostream>
#include "forValidation.hpp"

using namespace numberValidation;

int main() {
    std::string customerNumber;

    std::cout << "Enter the customer number: ";
    std::cin >> customerNumber;

    if (validateCustomerNumber(customerNumber)) {
        std::cout << "Customer number is valid.\n";
    }
    else {
        std::cout << "Customer number is invalid.\n";
    }

    return 0;
}