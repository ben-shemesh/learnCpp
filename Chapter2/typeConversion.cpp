#include <iostream>

int main () {
    // b is pg type bool meaning it can only evaluate to either
        // true or false. Zero = false (0) and nonZero = true (1)
    bool b = 43;
    // b will evaluate to true (1)
    std::cout << "b is " << b << std::endl;

    // since b elvaluates to true (1) i will hold the value of 1
    int i  = b;
    // i will evaluate to 1
    std::cout << "i is " << i  << std::endl;

    // since i is of type int and it reprsents and intergral arithmetic type
    // it will convert the floating-point (3.14) number to intergral type by
    // truncating the fractional point
    i = 3.14;
    // will evaluate to 3
    std::cout << "i is " << i  << std::endl;

    // when a integral type is converted to a floating-point type
    // it adds a fractional point 
    double pi = i;
    // pi will evaluate to 3.0
    std::cout << "pi is "<< pi << std::endl;

    // when an unsigned type is assigned to a vlaue outside of its range 
    // it loops back to its higest value, subtracted by the out of range
    // abs value
    unsigned char c = -1;
    // c will evalute to 255
    std::cout << "c is " << c << std::endl;

    // when a signed valued is given a value that is out of its range
    // it will evalaute to undefined
    signed char c2 = 256;
    // c2 will evaluate to undefined.
    std::cout << "c2 is " << c2 << std::endl;

  return 0;
}