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
    // this set the number of punct to 0 from th start
    int numOfPunct = 0;
    //  this creates a loop that traverser the string 
    // each element in the string is represted by c in the range for loop
    for (auto c: lineOfText){
        // if the element is not a punct continue
        if (!ispunct(c)){
            // append at the characters that are not a punc to the result string
            result += c;}
        // if the element is a punct icrease the puinct count by 1;
        else if (ispunct(c)){
            numOfPunct++;
        }}
    std::cout << lineOfText 
              << " has: " 
              << numOfPunct
               << " punctuations" 
               << std::endl;
    std::cout << result;

    const std::string s("Keep out!");
    for (auto &c: s){ std::cout << c << "\n"<< std::endl;}
}