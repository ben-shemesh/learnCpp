#include <iostream>
// #include <typeinfo>

int main (){
//     // Type aliases are types that are synonymous for another type
//         // allow for simplicity on complex type definitions
//         // puts emphases on what the type is used for
//     // creates a type alias with the the keyword typedef named wages
//         // that is synonymous with double
//     typedef double wages; {}
//     wages hourly = 30.45;
//     // new standard is to use the keyword 'using'
//     using wages2 = double;
//     wages2 hourly2 = 30.45;

//     // creates a typealias psrtring that is synonymous to a pointer to char
//     typedef char *pstring;
//     // creates a variable singleChar that is a pointer to char that is a null pointer
//     const pstring singleChar = 0;
//     // creates a pointer to char that points to a constant pointer to char
//     const pstring *pstring2;

//     using pstring3 = char*;
//     const pstring3 myLetter = 0;
//     // foo points to a pointer that points to char
//     pstring3 **foo;

//     // constant variable i of type int
//     const int i = 42;
//     // type = int j = i (i)
//     auto j = i;
//         std::cout << "1\t" << typeid(j).name() << std::endl;
//         std::cout << j << "\n" << std::endl;

//     // type = const int &k = i (i)
//         // a reference to a constant int
//     const auto &k = i;
//     std::cout << "2\t" << typeid(k).name() << std::endl;
//     std::cout << k << "\n" << std::endl;

//     // type = int *p = i (PKi)
//         // a pointer to a constant int
//     auto *p = &i;
//         std::cout << "3\t" << typeid(p).name() << std::endl;
//         std::cout << p << "\n" << std::endl;

//     // type = const int j2 = i (i)
//     const auto j2 = i;
//         std::cout << "4\t" << typeid(j2).name() << std::endl;
//         std::cout << j2 <<  "\n" << std::endl;

//     // type = const int &k2 = i (i)
//         // a reference to a constant int
//     const auto &k2 = i;
//         std::cout << "5\t" << typeid(k2).name() << std::endl;
//         std::cout << k2 << "\n" << std::endl;
    
    const int ci = 0, &cj = ci;
    // what ever the type of ci is x will have that same type
    decltype(ci) x = 0;
    // what ever type cj is  y will have that same type  
    decltype(cj) y = x;
    // what ever type cj is  z will have that same type  
        // z must be initlialized though as cj is a reference  of ci
    decltype(cj) z = x;

    
    std::cout << "-----------" << "\n" <<std::endl;
    
    auto myNumber = 666;
    std::cout << myNumber << "\n" <<std::endl;
    // this is a pointer to a constant int 
    int const *i;
    i = &myNumber;
    std::cout << i << "\n" <<std::endl;
    // this is a constant pointer to int
    // int *const p = &myNumber;

}