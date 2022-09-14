/***************************************************
Author: @skywalkerSam
Purpose: "Hello World" program in C++, (Project-Copycat).
Date: 12022.09.14.23:57:00
****************************************************/
#include <iostream>


int main()      
{
    int number_one;                             // Variable Declaration...
    std::cout<<std::endl<<"Enter a number: ";   // Message
    std::cin>>number_one;                       // Input from the user
    std::cout<<number_one<<", Hey! that's my favorite number... "<<std::endl;     // Output

    return 0;       // The main() should must return, just like other functions...
}
