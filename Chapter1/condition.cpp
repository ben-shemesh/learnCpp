#include <iostream>

int main() {
    // initalizes sum and val, both have a type of int
    int sum = 0, val = 1;
    // while condition executes until the condition becomes false
    while (val <= 10) {
        // sum is increased by the value stored in val(1)
        // until the while condition is false 
        std::cout << "the sum is " << sum << "\n" << std::endl;
        sum += val;
        // increase val by 1 after each iteration
        std::cout << "the value is " << val << "\n" << std::endl;
        ++val;
    }
    std::cout << "The Sum of 1 to 10 is " 
              << sum << std::endl;
    return 0;
}