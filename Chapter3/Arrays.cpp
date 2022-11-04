#include<iostream>
#include<vector>
int main(){
    // unsigned cnt that has the value of 42
    unsigned cnt = 42;
    // a constant ecpression witht he value 42
    constexpr unsigned sz = 42;
    // an array of 10 ints
    int arr[10];
    // an array of 42 pointers
    int *parr[sz];
    std::string greeting("Hello");
    std::cout << greeting;
    // array of char must have an extra space for a Null
    const char a6[7] = "daniel";

}