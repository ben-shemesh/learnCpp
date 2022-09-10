// represents input stream and ostream
    // a stream is a sequence of characters read from 
    // or written to an IO device i.e keyboard (istream) and terminal (ostream)
#include <iostream>

// all functions must consist of 4 conponents
    // a return type (int), a function name (main)
    // parameter list, and function body {}.
// the main function is require to have a return type of int
int main() {
    // to handle input we use an object of type istream (cin)
        // for output we use an object of type ostream (cout)
    std::cout << "Enter two numbers" << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "The sum of:"<< v1 << "and" << v2 << " is: "
              << v1 + v2 << std::endl;

    // returns a value back to the calling function
    // the return value must be the same of that of the
    // type of the calling function.
    
    // the return of a main function is a status indicator
        // 0 idicates that the function return was a success
        // while a nonzero repressents some type of error.
    return 0; // type int (0)
}