#include <iostream>

// this is a function
// it returns either "true" or "false" (bool)
// the name is is_leap_year
// the list of parameters consists of one parameter:
//  an int called "year"
// ----
// the intent of this function is to be called with a year (e.g. 2000) and get as a result
// whether it is/was a leap year (for 2000 the result needs to be "true")
// ----
// test cases that we went through:
// 2020 should return true (divisible by 4)
// 1900 should return false (divisible by 100)
// 2000 should return true (divisible by 400)
// ----
bool is_leap_year(int year)
{

const int four{4}, hundred{100}, fourhundred{400};
    // I want to use a single branch, which combines the different options
    // if ((year is divisible by 4) AND (not year is divisible by 100) AND (year is divisible by 400))
    // => true

    // division : 1900 / 4 = 475 (the result of division)
    // modulus : 1900 % 4 = 0 (the remainder of the division)
    // division : 1902 / 4 = 475 (the result of division)
    // modulus : 1900 % 4 = 2 (the remainder of the division)

   if ( (year % four == 0) && (
       (year % hundred != 0) || (year % fourhundred == 0)) ) {

// 0 / 4 = 0 ; 0 % 4 = 0 (0x4 + 0 = 0)
// 1 / 4 = 0 ; 1 % 4 = 1 (0x4 + 1 = 1)
// 2 / 4 = 0 ; 2 % 4 = 2 (0x4 + 2 = 2)
// 3 / 4 = 0 ; 3 % 4 = 3 (0x4 + 3 = 3)
// 4 / 4 = 1 ; 4 % 4 = 0 (1x4 + 0 = 4)
// 5 / 4 = 1 ; 5 % 4 = 1 (1x4 + 1 = 5)
// 6 / 4 = 1 ; 6 % 4 = 2 (1x4 + 2 = 6)
// 7 / 4 = 1 ; 7 % 4 = 3 (1x4 + 3 = 7)
// 8 / 4 = 2 ; 8 % 4 = 0 (2x4 + 0 = 8)
// 9 / 4 = 2 ; 9 % 4 = 1 (2x4 + 1 = 9)

// 5 / 3 = 1 ; 5 % 3 = 2 (1x3 + 2 = 5)
// 6 / 3 = 2 ; 6 % 3 = 0 

// 2003 is a leap year? NO
// 20  12 is a leap year? YES
// 20  14 is a leap year? NO (14 / 4 = 3 remainder 2 ... 14 % 4 == 2)

// x % 4
// 0  0
// 1  1
// 2  2
// 3  3
// 4  0
// 5  1
// 6  2
// 7  3
// 8  0
// 9  1
//10  2


// 2020 should return true (divisible by 4) ** CORRECT
   if ( (2020 % four == 0) && (!(2020 % hundred == 0) || (2020 % fourhundred == 0)) ) {
   if ( (true) && (!(false) || (false)) ) 
   if ( (true) && (true || (false)) ) 
   if ( (true) && (true) ) 
   if ( (true) ) 
// the result of dividing 2020 into 4 is 505; 505 x 4 = 2020 (no remainder)

// 1900 should return false (divisible by 100) HOMEWORK
   if ( (1900 % four == 0) && (!(1900 % hundred == 0) || (1900 % fourhundred == 0)) ) {
   if ( (false) && (!(true) || (false)) )
   if ( (false) && ((false || (false) )
   if ( (false) && (false) )
   if ( (false) )
// 2000 should return true (divisible by 400) HOMEWORK
   if ( (2000 % four == 0) && (!(2000 % hundred == 0) || (2000 % fourhundred == 0)) ) {
   if ( (true) && (!(true) || (true)) )
   if ( (true) && ((false) || (true)) )
   if ( (true) && (true) )
   if ( (true) )
// next lesson: we will describe this same calculation (logical) as MP and MT
   
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
