#include <iostream>

int main() {
    unsigned u = 10, u2 = 42;
    // will work because both are of type unsiged and 42 - 10 = 32
    // 32 is out of range
    std::cout << u2 << " minus " << u << " equals " 
              << u2 - u << std::endl;
    // will wrap as 10 - 42 = -32 is less than zero
    std::cout << u << " minus " << u2 << " equals "
              << u - u2 << std::endl;

    int i = 10, i2 = 42;
    // will work as intended as its signed (int) with a range of -127 - 0 - 128
    // will evlaute to  32
    std::cout << i2 << " minus " << i << " equals "
              << i2 - i << std::endl; 
    // will work and will evaluate to -32
    std::cout << i << " minus " << i2 << " equals " 
              << i - i2 << std::endl;
    // will work as (i)10 - (u)10 equals 0
    // its within range of unsigned type 0 -255
    std::cout << i << " minus " << u << " equals " 
              << i - u << std::endl;
    // will evaluate to 0; (u)10 - (i)10
    std::cout << u << " minus " << i << " equals " 
              << u - i << std::endl;

    return 0;
}