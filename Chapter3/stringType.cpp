#include <iostream>
#include <string>

int main() {
    // strings are variable-length sequences of characters
    std::string s1; // creates an uninitilaized variable of type string name s1
    std::string s2 = s1; // the string variable s2 is a copy of the string variable s1
    std::string s3 = "hello"; // initlaizes the string s3 to "hello"
    std::string s4(3, '6'); // creates a string using  two parameters the first being the 
                            // length sequence and the second representing the character
                            // this is direct initlization
    std::cout << s1 << "\n" << std::endl;
    
    // the string varibale s5 uses a combination of copy initlization and direct initlization
    std::string s5 = std::string(3, '7');
    std::cout << s5 << "\n" << std::endl;
    std::cout << s4 << std::endl;

    // Operating on Strings
    std::string myString("Assholes live forever");
    // .empty() returns true(1) fs the string is empty
        // otherwise it will return false (0)
    std::cout << myString.empty() <<std::endl;

    // .size() returns the number of characters in the a given string
    std::cout << myString.size() <<std::endl;
    if(myString.size() != 0)
        std::cout << "not empty\n" << std::endl;
        // string[n] retutns the character at the index(n) of a given string
    std::cout << myString[6] <<std::endl;

    std::string allA("all aaaa");
    std::string allB("all bbbb");
    if (allA[4] > allB[4])
        std::cout << " larger than b" << std::endl;
    else 
        std::cout << " smaller than b" << std::endl;
    
    std::string myString2; // creats an unitialized string
    std::cout << "Please enter a string\n" << std::endl;
    std::getline(std::cin,myString2);
    std::cout << myString2 <<std::endl; 

    if (myString2.size() > 10)
        std::cout << " This is a long string";
    else 
        std::cout << " This is a short string";
}