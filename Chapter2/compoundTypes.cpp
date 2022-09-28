// compound types
    // references
    // pointers

#include <iostream>

int main(){
    // references define an alternative name for an 
        // already exisitng object, NOT a literal
    // references must match the same type of the object
        // that it references
    // references cannot reference other references 
    int num = 666;
    int &refNum = num;
    // will display the value of the reference object (666)
    std::cout << refNum  << " is the vlaue of the referenced object." << "\n" << std::endl;
    // will display the place in memory of the referenced object (0x16b75b45c)
    std::cout << &refNum << " is the place in memory of the refernced value." << "\n" << std::endl;
    // redefines refum to the value 600
    refNum = 600;
    // this creates a reference to the refNum object
        // which in turns is a reference to num 
        // the value should be 600
    int &ii = refNum;
    // this should evaluate to the memory location of refNum which 
        // references the memory location of num
    std::cout << &ii << " is the memory location of refNum" << "\n" << std::endl;
    // this should evaluate to the value of refNum
        // which is a refernce to the value of num 
        // (600)
    std::cout << ii << " is the value of refNum" << "\n" << std::endl;

    int i; // undefined
    int &ri = i; // undefined (with reference displayed place in memory)
    std::cout << &ri << std::endl; // place in memory of i
    i = 5;
    ri = 10; // same as i = 10
    std::cout << i << " " << ri << std::endl;

    int i = 0, &r1 = i;
    double d = 0, &r2 = d;
    r2 = 3.14; // same as d = 3.14
    r2 = r1; // same as d = 0
    i = r2; // same as i = 0
    r1 = d; // same as i = 0
    std::cout << r1 << i << d << r2 << std::endl;

}