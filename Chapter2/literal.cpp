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
    return 0;
 }