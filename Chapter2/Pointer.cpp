#include <iostream>
    // pointers
int main() {
    // int *ip1, *ip2; // both pointers are of type int
    // double dp, *dp2; // dp2 is a pointer to double , dp is of type double
    
    // int ival = 42;
    // int *p = &ival; // p holds the address of ival
    // std::cout << p << "\n" << std::endl;

    // double dval;
    // dval = 3.144444;
    // double *pd = &dval; // valid: pd points to the address of dval
    // double &dref = dval; // valid: dref references the value of dval (3.144444)
    // double *pd2 = pd; // valid: pd2 points to the pointer pd which points to the address of dval

    // std::cout << pd2 << "\n" << dref << std::endl;

    // int ivally = 42; // the value of ivally is 42
    // int *p = &ivally; // p points to the address of ivally (42)
    // // this will point to the value of the object being pointed to not the address
    // // dereferncing
    // std::cout << *p << "\n" << std::endl;
    // // reassigns the value of the object being pointed to ,
    // *p = 40;
    // *pd = 3.0;
    // std::cout << *p << "\n" << *pd<<  std::endl;

    // int i = 42; // i initialized to 42
    // int &ri = i; // &ri creates a reference to i (42)
    // // should evaluate to the value of i and the location of i 
    // std::cout << ri << " | " << &ri << std::endl;

    // std::cout << "1-----" <<std::endl;
    // // creates a pointer of type int 
    // // (*) represents the creating of a pointer 
    // // points to a place in memory 
    // int *po;

    // // points to the i object 
    // // po now points to the address of i (0x16bcb73ac)
    // po = &i;
    // std::cout << po << std::endl;
    // std::cout << "2-----" <<std::endl;

    // std::cout << i << std::endl;
    // // should eval to the value of the object po points to  
    // std::cout << *po << "\n" <<std::endl;
    
    // // derefernces: changes the value of po to 300 as well as i
    //     // as po points to i
    // *po = 300;
    // std::cout << "3-----" <<std::endl;
    // std::cout << i <<std::endl;

    // int &r22 = *po;
    // std::cout << r22 << std::endl;

    /*
    ex 2.18
        write code to change the value of a pointer 
        write code to change the value to which the pointer points
    */

   // creats a variable num of type int
    int num = 300;
    // declares a pointer of type
    int *poo;
    // poo now holds the address of num
    poo = &num;
    // num reassigned to 600
        // this changes the value of the place in memory that p also holds
    num = 600;
    // evals to the value of poo (600 as it holds the address of num, thus is can read the value)
        // and the address of poo, which is the address of num 
    std::cout << *poo << "\t" << poo <<  std::endl;

    // defines a variable num2 of type int
    int num2 = 400;
    // poo which previous held the value of num now hold the address of num2
    poo = &num2;
    // evals to the value of poo (400 as it holds the address of num2, thus is can read the value)
        // and the address of poo, which is the address of num2
    std::cout << *poo << "\t" << poo << std::endl;
    /*
    ex 2.20
    what will this orint?
    */
    int i = 42;
    int product = i * i;
    std::cout << product << "\n" <<std::endl;
    int *pi = &i;
    *pi = *pi * *pi;
    std::cout << *pi << std::endl;

    /*
    ex 2.21
    explaine and tell whether or not the are illegal or not
    */
   int i = 0;
   // illegal becasuse the pointer and the object must be of the same type
//    double* dp = &i;
   // illegal as its not holding a place in memory
//    int *ip = i;
   // legal holds a place in memory
   int *p = &i;


}