#include <iostream>
#include <string>
int money;
int i = 40;
int main () {
    int i = 100, sum = 0;
    for (int i = 0; i != 10; i++) {
        sum += i;
    std::cout << i << " " << sum << std::endl;
    }
    std::cout << "---------------\n";
    {
    int i = 100; // block scope
    int j = i;
    // should print out 100;
    std::cout << j << "\n";
    }

    {   // inner scope1 start
        // 
        // outter scope of inner scope2
        // declares a local variable money and initializes to 25;
       int money = 25;
       // prints 25
      std::cout << money << "\n";
      { // inner scope2 start inside of inner scope2
      // has access to money variable in inner scope1
      // defines it as 2, no longer 25
        money = 2;
        // prints 2
      std::cout << money << "\n";

      } // inner scope2 ends
    } // inner scope1 ends

    // this will evaluate to 0 because the money variable in the global state
    // is accessable* to all scoopes
    // even though its declared but not defined its value will evaluate to 0
    std::cout << money << "\n";
    // must include the string library to use string that is not a
    // string literal
        // this is an intialization of the object sentence (initiliztion sets)
    std::string sentence = ("hello\n");
    std::cout << sentence;
    // this is assignment of the object sentence (assignment changes)
    sentence = ("Cpp\n");
    // sentence now has the value of "Cpp" instead of "hello"
    std::cout << sentence;
    
    // list initilizations
        // list initilization will not work with built in types
        // if the initializer might lead to the lost of information/data
    long double pie = 3.1415926536;
    int b(pie);
    int c(pie), d = pie;
    double f = pie;
    std::cout << pie << "\n" << b << "\n" << c << "\n" << d << "\n";
    std::cout << "---------\n";
    // this v is not uninitalized its default value is and empty string
        // this is defined by the string class of the std library
    std::string empty;
    std::cout << sentence.length() <<  "\n";

//     // will be truncated to 3
    int input_value = 3.14;
    std::cout << input_value << "\n";
    double salary, wages = 9999.99;
    std::cout << salary << "\n";

    int num = 23;
    int result = num / 0;
//     // will evaluate to 0 division by 0 is infinity.
    std::cout << "\n" << result << std::endl;


    return 0;
 }