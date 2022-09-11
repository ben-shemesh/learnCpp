#include <iostream>

int main(){
    int sum = 0, value = 0;
    // will contiue to take integers from the primary input device (keyboard)
    // if the value is not an integer it will become invalid.
    while (std::cin >> value)
        sum += value;

    std::cout << "The Sum is " << sum << std::endl;
    return 0;

}