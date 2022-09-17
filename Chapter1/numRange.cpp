#include <iostream>

/*
ex 1.19
    revise the program you wrote for the exercise 1.11
    that printed a range of numbers so that it handles input
    in which the first number is smaller than the second number.
*/
int main() {
    // init the two number
    int num1, num2;
    // recieve values from istream
    std::cin >> num1 >> num2;
    // in the case that the first number is larger
    if (num1 > num2) {
        // decrease the number untill it is equal to
        // the smaller number (num2)
        while (num1 >= num2)
        {
            // prints the current number
            std::cout << " The number is \t"
                    << num1 << std::endl;
            // decrements the larger number
            num1--;
        }
        
    } else {
        // in the case that the first number is smaller
        // the second number
        while (num1 <= num2)
        {
            // prints the numbers
            std::cout << " The number is \t"
                    << num1 << std::endl;
            // increments the number.
            num1++;
        }
    }
    // finish execution.
    return 0;
}