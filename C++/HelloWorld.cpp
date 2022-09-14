/***************************************************
Author: @skywalkerSam
Purpose: "Hello World" program in C++
Date: 12022.09.14.23:22:00
****************************************************/

#include <iostream>     // Preprocessor Directives...


// Main Function()
int main(int argc, char const *argv[])
{
    std::cout<<"Hello World...";
    std::cout<<"Hello World...";
    std::cout<<"Hello World :)"<<std::endl;
    std::cout<<"Hello World :)";
    std::cout<<"\n\tHello World...\n";
    std::cout<<"\n\t\t\t\t\t\t by: @skywalkerSam";

    return 0;
}



/*
    #Notes/Tips:

>_ Semicolon(;) - Don't forget it ;)

>_ Namespaces - To avoid conflicts from different libraries, we use "std::cout". It could be "asai::cout" or "google::cout".. Different versions of "cout" are defined by different libraries...

>_ "using namespace std;" - You're no longer required to do "std::" but, It could be conflicted over large programs.
    >_ So, We've to be more specfic...
        "using std::cout;" 
        "using std::cin;"     // Use only what you need :)
        "using std::endl;" 

>_ C++ Standards:  C++98, C++03
    >_ Modern C++:  C++11, C++14, C++17, C++20

*/
