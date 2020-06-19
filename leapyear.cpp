#include <iostream>

bool is_leap_year(int year)
{

const int four{4}, hundred{100}, fourhundred{400};
    
   if (((year / four) && (year / hundred == false)) && year / fourhundred ) {

   
   return true;
   }
   
    // complete the code for this function, so that
    // it returns true for leap years (divisible by 4 or 400)
    // and false for years that are not divisible by 4, or are also divisible by 100 but not by 400
    else {
    
    return false;
    }
}

int main() {
    int year;
    std::cout << "Which year do you want to ask about? ";
    std::cin >> year;
    if (is_leap_year(year)) {
        std::cout << "YES, " << year << " is a leap year." << std::endl;
    }
    else {
        std::cout << "NO, " << year << " is not a leap year." << std::endl;
    }
    return 0;
}