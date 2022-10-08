#include <iostream>
#include <vector>

int main(){
    int number;
    std::vector<int> numbers;
    while (std::cin >> number)
        std::cout << number << std::endl;
        numbers.push_back(number);
    
    std::string word;
    std::vector<std::string> words;
    while (std::cin >> word)
        std::cout << word << "\n" << std::endl;
        words.push_back(word);
    
    std::vector<int> v1{1,2,3,4,5,6,7,8,9};
    for (auto &i: v1)
        i *= i;
    for (auto i: v1)
        std::cout << i << " \n" << std::endl;

}