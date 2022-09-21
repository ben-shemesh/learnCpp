 #include <iostream>
 #include <string>

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
// ex 2.5
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
              << "3.14L\t" << ": which represents the value (" << 3.14L << ") : is of type long double\n"
             << std::endl;
    std::cout << "------------" << std::endl;
    std::cout << "10\t" << ": which represents the value (" << 10 << ") : is of type int\n"
              << "10u\t" << ": which represents the value (" << 10u << ") : is of type usigned int\n"
              << "10.\t" << ": which represents the value (" << 10. << ") : is of type double\n"
              << "10e-2\t" << ": which represents the value (" << 10e-2 << ") : is of type double\n"
              << std::endl;
   // ex 2.6
      // what, if any i, are the differences between the following definitions
   // these are valid variables as they are both 
   // of type int and within range (-)127 - 0 -127
   int month = 9, day = 7;
   // month2 is invalid as it is not a valid octal digit int month = 09
   // day2 is valid.
   int day2 = 07;

   // ex 2.7
   // what values do these literals represent? 
   // What type does each have?
      // (a)
      std::cout << "Who goes with F\145rgus?\012" << "\012" << std::endl;
      std::cout << "2\tM\n" << std::endl;

    return 0;
 }