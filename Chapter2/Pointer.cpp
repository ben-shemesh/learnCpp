#include <iostream>
    // pointers
int main() {
    // int *ip1, *ip2; // both pointers are of type int
    // double dp, *dp2; // dp2 is a pointer to double , dp is of type double
    
    // int ival = 42;
    // int *p = &ival; // p holds the address of ival
    // std::cout << p << "\n" << std::endl;

    double dval;
    dval = 3.144444;
    double *pd = &dval; // valid: pd points to the address of dval
    double &dref = dval; // valid: dref references the value of dval (3.144444)
    double *pd2 = pd; // valid: pd2 points to the pointer pd which points to the address of dval

    std::cout << pd2 << "\n" << dref << std::endl;

    int ivally = 42; // the value of ivally is 42
    int *p = &ivally; // p points to the address of ivally (42)
    // this will point to the value of the object being pointed to not the address
    // dereferncing
    std::cout << *p << "\n" << std::endl;
    // reassigns the value of the object being pointed to ,
    *p = 40;
    *pd = 3.0;
    std::cout << *p << "\n" << *pd<<  std::endl;

    int i = 42; // i initialized to 42
    int &ri = i; // &ri creates a reference to i (42)
    // should evaluate to an address location of i 
    std::cout << ri << "\t" << &ri <<  "\n" << std::endl;

    // creates a pointer of type int (*) represents the creating of a pointer 
    // points to a place in memory 
    std::cout << "-----" <<std::endl;
    int *po;
    // 
    po = &i;
    std::cout << po << "\n" << std::endl;
    std::cout << "-----" <<std::endl;
    *po = i;
    std::cout << po << "\n" <<std::endl;
    *po = 300;
    std::cout << "-----" <<std::endl;
    std::cout << i <<std::endl;
    int &r22 = *po;
    std::cout << r22 << std::endl;


}