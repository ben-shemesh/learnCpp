#include <iostream>

int main(){
    // creates a variable val of type int with a value of 666
 int val = 666;
    // creates a pointer of type int the holds the value of val
 int *pi = &val;
    // creates a pointer of type int that holds the address of a pointer
 int **ppi = &pi;

 std::cout << "The value of val\n"
            << "direct value is: "
            << val << "\n"
            << "The address of val is: "
            << pi << "\n"
            << "The address of the address of val is: "
            << ppi << "\n" << std::endl;

   double obj = 3.14;
   std::cout << " the direct address of obj is: " << &obj <<std::endl;
   double *pip = &obj;
   std::cout << " the address of obj through pip is: " << pip <<std::endl;
   double *pi2 = &obj;
   std::cout << " the address of obj through pi2 is: " << pi2 <<std::endl;
   // you can only dereference the pointer twice if they are of the same type
   // void pointers cannnot dereference a pointer of a specific type
   double **pii = &pi2;
   std::cout << " the value of obj is: " << **pii  << "\n" <<std::endl;
   pi2 = pip;
   bool itsTrue (pi2 == pip);
   std::cout << itsTrue << std::endl;
   return 0;
}