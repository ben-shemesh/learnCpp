#include<iostream>
#include<vector>

int main(){
    // // iterators
    // // ------------------------------------
    // std::vector<std::string> words;
    // std::string word;
    // getline(std::cin, word);
    // words.push_back(word);
    // auto b = words.begin(), e = words.end() -1;
    // for (auto &it: words){
    //     for (auto &thi: it){
    //         thi = toupper(thi);
    //         }
    // }
    // for (auto &j: words)
    //     std::cout << j;
    // // ------------------------------------

    // std::string myString;
    // getline(std::cin, myString);
    // for (auto &i: myString){
    //     auto a = myString.begin();
    //     *a = toupper(*a);
    //     }
    // std::cout << myString;
    // // ------------------------------------

    // std::string strings;
    // std::vector<std::string> stringy;
    // const std::vector<int> numby{6,6,6,6,6,6,6,6};

    // getline(std::cin, strings);
    // stringy.push_back(strings);
    // // v has the value of the first element of the stringy vec
    // auto v = stringy.begin();
    //     // iterates throught the vec
    //     for (auto &i: stringy)
    //     std::cout << i << "\n";
    // // dereferences and reassigns the fist element in stringy vec
    // *v = "hello";
    // // why is this only displaying "hello" and not the entirety of the vec
    // for (auto &i: stringy)
    //     std::cout << i;

    // auto cv = numby.begin();
    // std::cout << *cv;
    // // ------------------------------------
    // std::vector<int> v1{1,2,3,4,5,6,7,8,9};
    // std::vector<int> v2(10);
    // std::vector<int> v3(10,42);
    // std::vector<int> v4{10};
    // std::vector<int> v5{10,42};
    // std::vector<std::string> v6(10);
    // std::vector<std::string> v7{10, "hi"};
    // for (auto it = v1.cbegin(); it != v1.end(); ++it)
    //     std::cout << *it << std::endl;
    // for (auto it = v2.cbegin(); it != v2.end(); ++it)
    //     std::cout << *it << std::endl;
    // for (auto it = v3.cbegin(); it != v3.end(); ++it)
    //     std::cout << *it << std::endl;
    // for (auto it = v4.cbegin(); it != v4.end(); ++it)
    //     std::cout << *it << std::endl;
    // for (auto it = v5.cbegin(); it != v5.end(); ++it)
    //     std::cout << *it << std::endl;
    // // ------------------------------------
    // std::vector<int> theNumberVec{1,2,3,4,5,6,7,8,9,10};
    // for (auto it = theNumberVec.begin(); it != theNumberVec.end(); ++it){
    //     *it *= 2;
    //     std::cout << *it << "\n" << std::endl;
    //     }
    // // ------------------------------------
    std::vector<int> vecOfNumbers {12, 13, 10, 20, 30};

        for (auto it = vecOfNumbers.begin(); it != vecOfNumbers.end(); ++it){
                std::cout << *it << std::endl;
                for (auto &i: vecOfNumbers){
                        std::cout << "--------------" << std::endl;
                        auto sum = *it + i;
                        std::cout << "it is equal to : " <<  *it << "\n" << std::endl;
                        std::cout <<  "i is equal to :" << i << "\n" << std::endl;
                        std::cout << " The sum is: " << sum << "\n" << std::endl;
                        }
        
        }

    // {3 12 34 5 67 34 76}
  
}