 #include <iostream>

 int main() {
    std::cout << "new line \t" << std::endl;
    std::cout << "Hello \nworld." << std::endl;
    std::cout << "-----------" << std::endl;

    std::cout << "horizontal tab \t" << std::endl;
    std::cout << "Hello \tworld." << std::endl;
    std::cout << "-----------" << std::endl;

    std::cout << "alert\t" << std::endl;
    std::cout << "Hello \aworld." << std::endl;
    std::cout << "-----------" << std::endl;

    std::cout << "vertical tab \t" << std::endl;
    std::cout << "Hello \vworld." << std::endl;
    std::cout << "-----------" << std::endl;

    std::cout << "backspace \t" << std::endl;
    std::cout << "Hello \bworld." << std::endl;
    std::cout << "-----------" << std::endl;

    std::cout << "backslash \t" << std::endl;
    std::cout << "Hello \\world." << std::endl;
    std::cout << "-----------" << std::endl;

    std::cout << "question mark \t" << std::endl;
    std::cout << "Hello \?world." << std::endl;
    std::cout << "-----------" << std::endl;

    std::cout << "carriage return \t" << std::endl;
    std::cout << "Hello \rworld." << std::endl;
    std::cout << "-----------" << std::endl;

    std::cout << "formfeed \t" << std::endl;
    std::cout << "Hello \fworld." << std::endl;
    std::cout << "-----------" << std::endl;

    std::cout << " \n" ;
    std::cout << "\t Hi \n";
    std::cout << "-----------" << std::endl;

    std::cout << 'a' << " : is of type char\n" << L'a'
              << " : is of type wchar_t\n" << "a"
              << " : is of type string literal, with a size of 2 \n" << L"a"
              << " : is of type wide characters (an array of chars of type wide character wchar_t)\n"
              << std::endl;
    std::cout << 10 << " : is of type int\n" << 10u
              << " : is of type usigned int\n" << 10L
              << " : is of type long int (32bits)\n" << 10uL
              << " : is of type unsinged long (32bits)\n" << 012
              << " : is of type octal, having the value of: 10\n" << 0xc
              << " : is of type hex, having the valiue of 10\n"
              << std::endl;
    std::cout << 3.14 << " : is of type decimal\n" << 3.14f
             << " : is of type float\n" << 3.14L
             << " : is of type long decimal (10 signifigant digits)\n"
             << std::endl;
    std::cout << 10 << " : is of type int (unsigned int)\n" << 10u
              << " : is of unsigned int\n" << 10.
              << " : is of type decimal\n" << 10e-2
              << " : is of type double\n"
              << std::endl;
    return 0;
 }