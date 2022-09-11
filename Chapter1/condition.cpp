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

    // ex 1.9 
    /*
        Write a program that uses the while to sum the numbers 50 to 100
    */
    int newSum = 0, newVal = 50;
    while (newVal <= 100) {
        std::cout << "The sum is " << newSum << "\n" << std::endl;
        newSum += newVal;
        std::cout << "The newVal is " << newVal << "\n" << std::endl;
        ++newVal;
    }

    /*
    ex. 1.10
        Write a program that uses the while loop to print the numbers
        10 to 1.
    */
   int valNew = 10;
   while (valNew >= 0) {
        std::cout << "The value is " << valNew << " \n" << std::endl;
        --valNew;
   }

   /*
   ex 1.11
    Write a program that prompts the user for two integers
    Print each number in the range specified by those two integers.
   */
  int num1 , num2;
  std::cout << "Please enter two numbers. " << "\n" << std::endl;
  std::cin >> num1 >> num2; 
  while (num1 >= num2)
  {
        std::cout << "The number is " << num1 << std::endl;
        --num1;
  }

    return 0;
}