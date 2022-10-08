#include <iostream>

int main(){
    std::string lineOfText;
    std::cout << "Plese enter a line of text\n";
    getline(std::cin, lineOfText);
    std::string result;
//if statment
    if (!lineOfText.empty())
        for (auto &c: lineOfText)
            if (isalpha(c))
            c = 'x';
    std::cout << lineOfText;
//for loop
    for (decltype(lineOfText.size()) i = 0; i != lineOfText.size(); i++){
        if (!isspace(lineOfText[i]))
            lineOfText[i] = 'x';
        std::cout << lineOfText[i] << i << std::endl;
    }
    std::cout << lineOfText;
    auto numOfPunct = 0;
    for (auto c: lineOfText){
        if (!ispunct(c)){
            result += c;}
        else if (ispunct(c)){
            numOfPunct++;
        }}
    std::cout << lineOfText 
              << " has: " 
              << numOfPunct
               << " punctuations" 
               << std::endl;
    std::cout << result;
}