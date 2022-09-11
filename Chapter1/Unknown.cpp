#include <iostream>

int main(){
    int sum = 0, value = 0;
    // will contiue to take integers from the primary input device (keyboard)
    // if the value is not an integer it will become invalid.
    while (std::cin >> value)
        sum += value;

    std::cout << "The Sum is " << sum << std::endl;
/*
    ex 1.16
    create your own program that prints the sum of numbers
    read from cin
*/
    int newSum = 0, newVal = 0;
    while (std::cin >> newVal)
    {
        // if the newVal is greater is than 10 
        // multiple it by 2 then procced with the while loop
        if (newVal > 10) {
            newVal *= 2;
        }
        newSum += newVal;
    }
        std::cout << "The sum is " << newSum << std::endl;
    
    return 0;

}