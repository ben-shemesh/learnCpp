#include <iostream>
#include <string>

int main(){
    // // reads a line at a timne
    // std::string myInput;
    // getline(std::cin, myInput);
    // std::cout << myInput << "\n";
    // // reads a word at a time
    // std::string myWord;
    // std::cin >> myWord;
    // std::cout << myWord << "\n";

    // // read two strings
    // std::string s1;
    // std::string s2;
    // getline(std::cin,s1);
    // getline(std::cin,s2);
    // // deteremine if they are equal
    // // if not report which of the two is larger
    // if (s1 != s2) 
    //     if (s1 > s2)
    //         std::cout << "s1 is larger than s2" <<"\n" 
    //         << std::endl;
    //     else
    //         std::cout << "s2 is larger than s1" << "\n"
    //         << std::endl;
    // else 
    //     std::cout << "The strings are equal!";

    std::cout << "enter two strings\n";
    std::string s3;
    std::string s4;
    std::cin >> s3 >> s4;
    std::string s34 = s3 + s4;
    std::cout << s34 << "\n" << std::endl;
    std::string s43 = s3 + " " + s4;

    std::cout << s43 << "\n" << std::endl;
}