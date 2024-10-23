
#include <string>

namespace numberValidation {

    bool isAlphabetic(const std::string& str) {
        for (char ch : str) {
            if (!((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))) {
                return false;
            }
        }
        return true;
    }

    bool isNumeric(const std::string& str) {
        for (char ch : str) {
            if (!(ch >= '0' && ch <= '9')) {
                return false;
            }
        }
        return true;
    }

    bool validateCustomerNumber(const std::string& customerNumber) {
        if (customerNumber.length() != 6) {
            return false;
        }

        std::string alphabeticPart = customerNumber.substr(0, 2);
        std::string numericPart = customerNumber.substr(2, 4);

        if (!isAlphabetic(alphabeticPart) || !isNumeric(numericPart)) {
            return false;
        }

        return true;
    }
}