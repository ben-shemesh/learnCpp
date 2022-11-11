#include<iostream>
#include<vector>
#include<string>
#include<iterator>
int main(){
    // // unsigned cnt that has the value of 42
    // unsigned cnt = 42;
    // // a constant ecpression witht he value 42
    // constexpr unsigned sz = 42;
    // // an array of 10 ints
    // int arr[10];
    // // an array of 42 pointers
    // int *parr[sz];
    // std::string greeting("Hello");
    // std::cout << greeting << "\n" << std::endl;
    // // array of char must have an extra space for a Null
    // const char a6[7] = "daniel";
    // const unsigned sz2 = 3;
    // int ial[sz2] = {23,34,1};

    // unsigned buff_size = 1024;
    // int ia[buff_size];
    // int ia2 [4 * 7 - 14];
    // char st[12] = "fundemental";

    // // should evlauate to an array of 10 elements of empty strings
    // std::string sa[10] = {"World", "Pizza"};
    // for (auto i: sa)
    //     std::cout << i << "\n" << std::endl;
    // // should evalaute to an array of 10 elements of 0 int ia3[10];
    // int arrOf10[10]{1,2,3,4,4,5,6,};
    // int newArr[10]{};
    // for (int i = 0; i < sizeof(arrOf10) / sizeof(arrOf10[0]); i++){
    //     arrOf10[i] = i; 
    //     newArr[i] = arrOf10[i];
    //     std::cout << newArr[i];
    // }
    // std::vector<int> vec1;
    // std::vector<int> vec2;
    // int number;
    // int count = 0;
    // while (count < 10){
    //     std::cout << "Please enter a number\n";
    //     std::cin >> number;
    //     vec1.push_back(number);
    //     count++;
    // }

    // for (int i = 0; i < vec1.size(); i++){
    //     vec2.push_back(vec1[i]);
    // }

    // for (auto i: vec2)
    //     std::cout << i << "\n";
    

    // pointers and array

    std::string nums[] = {"hello", "world", "c++"};

    int arr[]{0,1,2,3,4,5,-6,7,8,9,-23,45};
    int *pbegin  = std::begin(arr);
    int *pend = std::end(arr);

   for (;pbegin != pend; ++pbegin) 
        if (*pbegin < 0){
            std::cout << *pbegin;
        }
}