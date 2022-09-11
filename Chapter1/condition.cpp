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

 //----------------

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
  
 // ----------------- 

  int forSum = 0;
  // for loops consist of three parts
    // the init-statement 
    // the condition statement
    // the expression
  // the val is initialized to 1 , the condition checks if the val
    // is greater or equal to 10
  for (int val = 1; val <= 10; val++)
  {
    // standard library displays to terminal the value of val
    std::cout << "The val is " 
              << val <<  "\n" << std::endl;
    // the sum is increased by the value of val
    forSum += val;
    // standard lib displays to the terminal the value of sum.
    std::cout << "The sum is " 
              << forSum << "\n" << std::endl;

   }
  /*
  ex 1.12
  */
    int sumFor = 0;
    for (int i = -100; i <= 100; ++i) {
        sumFor += i;
        std::cout << "The sum is " << sumFor << "\n" << std::endl;
        std::cout << "The value is " << i << std::endl;

 }
 int theSum = 0;
 for (int i = 50; i <= 100; ++i) {
    std::cout   << "The number is " << i << "\t"
                << "The sum is " << theSum 
                << std::endl;
    theSum += i;
 }

 int blastOff = 0;
 for (int i = 10; i >= blastOff; --i) {
    if (i == 0) {
        std::cout << "blastoff!! 🚀 ";
    }
    else {
    std::cout << i << "\n";
    }
    std::cout << "\n";
 }
    return 0;
}