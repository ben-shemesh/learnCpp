#include <iostream>
#include <string>

int main () {
    // must include the string library to use string that is not a
    // string literal
        // this is an intialization of the object sentence (initiliztion sets)
    std::string sentence = ("hello\n");
    std::cout << sentence;
    // this is assignment of the object sentence (assignment changes)
    sentence = ("Cpp\n");
    std::cout << sentence;
    
    // list initilizations
        // list initilization will not work with built in types
        // if the initializer might lead to the lost of information/data
    long double pie = 3.1415926536;
    int b(pie);
    int c(pie), d = pie;
    double f = pie;
    std::cout << pie << "\n" << b << "\n" << c << "\n" << d << "\n";
}