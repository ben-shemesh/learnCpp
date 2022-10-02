#include <iostream>

int main (){
    // variables of type contst can not change they are immutable
    // the can perform operations of the type they hold
    // but they cannot perform operations that 
    // change their value
    const int myNUm = 666;
    int newNumber = 300;
    // myNUm is used in arithmetic but
    // its value is not changed
    int result = myNUm + newNumber;
    // below is invalid
     // myNUm = newNumber + 500;
    std::cout << result <<std::endl;

    /*
    References to conts
    */

   int numm = 42;
   // creates reference to numm
   int &ref1 = numm;
   //creates a const regference to num
    // value can only be change indirectly through numm literal
    // or through a nonconst reference
   const int &ref2 = numm;

   std::cout << "the value of ref1 is:\t" << ref1 << "\n" << std::endl;
   std::cout << "the value of ref2 is:\t" << ref2 << "\n" << std::endl;

   ref1 = 43;
   std::cout << "the value of ref1 is:\t" << ref1 << "\n" << std::endl;
   // value changes even though its a const ref, becuase it was change indirectly
   std::cout << "the value of ref2 is:\t" << ref2 << "\n" << std::endl;

}