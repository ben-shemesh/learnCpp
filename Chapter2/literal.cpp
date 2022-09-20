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

    std::cout << "'a'\t"  << ": which represents the value (" << 'a' << ") : is of type char\n" 
              << "L'a'\t" << ": which represents the value ("  << L'a' << ") : is of type wchar_t\n" 
              << "\"a\"\t" << ": which represents the value (" << "a" << ") : is of type string literal, with a size of 2 \n" 
              << "L\"a\"\t" << ": which represents the value (" << L"a" << ") : is of type wide characters\n"
              << std::endl;
    std::cout << "-----------" << std::endl;

    std::cout << "10\t" << ": which represents the value (" << 10 << ") : is of type int\n"
              << "10u\t" << ": which represents the value (" << 10u << ") : is of type unsigned int\n"
              << "10L\t" << ": which represents the value (" << 10L << ") : is of type long\n"
              << "10uL\t" << ": which represents the value (" << 10uL << ") : is of type unsigned long \n"
              << "012\t" << ": which represents the value (" << 012 << ") : is of type octal\n"
              << "0xc\t" << ": which represents the value (" << 0xc << ") : is of type hex\n"
              << std::endl;
    std::cout << "------------" << std::endl;
    std::cout << "3.14\t" << ": which represents the value (" << 3.14 << ") : is of type double\n"
              << "3.14f\t" << ": which represents the value (" << 3.14f << ") : is of type floate\n"
              << "3.14L\t" << ": which represents the value (" << 3.14L << ") : is of type long decimal\n"
             << std::endl;
    std::cout << "------------" << std::endl;
    std::cout << "10\t" << ": which represents the value (" << 10 << ") : is of type int\n"
              << "10u\t" << ": which represents the value (" << 10u << ") : is of type usigned int\n"
              << "10.\t" << ": which represents the value (" << 10. << ") : is of type int\n"
              << "10e-2\t" << ": which represents the value (" << 10e-2 << ") : is of type float\n"
              << std::endl;
    return 0;
 }