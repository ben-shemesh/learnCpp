#include <iostream>
#include <vector>

int main(){
    // int number;
    // std::vector<int> numbers;
    // while (std::cin >> number)
    //     std::cout << number << std::endl;
    //     numbers.push_back(number);
    
    // std::string word;
    // std::vector<std::string> words;
    // while (std::cin >> word)
    //     std::cout << word << "\n" << std::endl;
    //     words.push_back(word);
    
    // std::vector<int> v1{1,2,3,4,5,6,7,8,9};
    // for (auto &i: v1)
    //     i *= i;
    // for (auto i: v1)
    //     std::cout << i << " \n" << std::endl;

    // std::vector<unsigned> scores(11,0);
    // unsigned grade;
    // // reads the inputed grades
    // while(std::cin >> grade)
    // // if valid grade
    //     if (grade <= 100)
    //         // increament the grade cluster each time if falls in
    //         // the 10 range of that grade
    //         // 60 adds 1 to the cluster 60-69
    //         // 45 adds 1 to the cluder 40-49
    //         ++scores[grade/10];

    // // 0 elements in empty vector
    // std::vector<std::vector<int>> v1;
    // // a vector with 10 elements of value 0
    // std::vector<int> v2(10);
    //         for (auto in: v2)
    //         std::cout << in << "\n" << std::endl;
    // // a vector with 10 elements of value 42
    // std::vector<int> v3(10,42);
    //         for (auto ind: v3)
    //         std::cout << ind << "\n" << std::endl;
    // // a vector of 1 element with value 10
    // std::vector<int> v4{10};
    //         for (auto inde: v4)
    //         std::cout << inde << "\n" << std::endl;
    // // a vector of 2 elements of value 10 and 42
    // std::vector<int> v5{10,42};
    //         for (auto inde: v5)
    //         std::cout << inde << "\n" << std::endl;
    // // a vector of type string ??
    // std::vector<std::string> v6(10);
    //         for (auto index: v6)
    //         std::cout << index << "\n" << std::endl;
    // // a vector of type string with 10 elements of value "hi"
    // std::vector<std::string> v7{10, "hi"};
    //         for (auto x: v7)
    //         std::cout << x << "\n" << std::endl;

    // std::string text;
    // std::vector<std::string> testSeqence;
    // while (std::cin >> text){
    //     testSeqence.push_back(text);
    //     for (auto &i: testSeqence)
    //         for(auto &j: i)
    //             if (!isupper(j))
    //             j = isupper(j);
    // }

    // a vector with int elements
    std::vector<int> groupOfNumber;

    std::cout << "please enter a number\n";
    int myNumber;
    int count;
    int sum = 0;
    while (count < 10){
        std::cin >> myNumber;
        std::cout << myNumber << "\n" << std::endl;;
        groupOfNumber.push_back(myNumber);
        count++;
    }   
    
    for (int i = 0; i < groupOfNumber.size(); i+=2){
        // std::cout << "\t" << sum << "\t" << std::endl;
        sum += groupOfNumber[i] + groupOfNumber[i + 1];
        std::cout << "\t" << sum << "\t" << std::endl;
    }

}