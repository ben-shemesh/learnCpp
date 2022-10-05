#include <iostream>
#include <string>

int main() {
    //

    // strings are variable-length sequences of characters
    std::string s1; // creates an uninitilaized variable of type string name s1
    std::string s2 = s1; // the string variable s2 is a copy of the string variable s1
    std::string s3 = "hello"; // initlaizes the string s3 to "hello"
    std::string s4(3, '6'); // creates a string using  two parameters the first being the 
                            // length sequence and the second representing the character
                            // this is direct initlization
    // the string varibale s5 uses a combination of copy initlization and direct initlization
    std::string s5 = std::string(3, '7');
    std::cout << s5 << "\n" << std::endl;
    std::cout << s4 << std::endl;

    // Operating on Strings
    
}