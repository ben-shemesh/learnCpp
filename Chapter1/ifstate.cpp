#include <iostream>

int main(){
    // initalize currval and val to 0
        // currval is the number we are counting
        // new value are read from val
    int currVal = 0, val = 0;
    // creating an if statment that take in the 
    // currval until EOF is commanded
    if (std::cin >> currVal) {
        // this will store the count for the current value (currVal)
            // we are processing; init to 1
        int count = 1;
        while (std::cin >> val)
        {
            // if the currVal matches the val 
            // increase the count by 1
            if (val == currVal)
                ++count;
            // if the number is not equal to the currVal
            // output the number of times
            else {
                std::cout << currVal << " occurs " << count
                    << " times \t " << std::endl;
                currVal = val;
                count = 1;
            }
        }
        std::cout << currVal << " occurs " << count << " times \t"
            << std::endl;
    }
    return 0;
}