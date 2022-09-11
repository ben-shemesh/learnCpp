#include <iostream>

int main() {
    std::cout << "Hello world" << std::endl;
    std::cout << "Enter two numbers to multiply" << std::endl;
    int v1, v2;
    std::cin >> v1 >> v2;
    std::cout << "The product of " << std::endl; 
    std::cout << v1 << std::endl;
    std::cout << "and " << std::endl;
    std::cout << v2 << std::endl;
    std::cout << "is" << std::endl;
    std::cout << v1 * v2 << std::endl;
    
    return 0;
}