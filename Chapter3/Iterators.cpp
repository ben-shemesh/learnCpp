#include<iostream>
#include<vector>
#include <iterator>

int main(){
    // iterators
    // ------------------------------------
    std::vector<std::string> words;
    std::string word;
    getline(std::cin, word);
    words.push_back(word);
    auto b = words.begin(), e = words.end() -1;
    for (auto &it: words){
        for (auto &thi: it){
            thi = toupper(thi);
            }
    }
    for (auto &j: words)
        std::cout << j;
    // ------------------------------------

    std::string myString;
    getline(std::cin, myString);
    for (auto &i: myString){
        auto a = myString.begin();
        *a = toupper(*a);
        }
    std::cout << myString;
    // ------------------------------------

    std::string strings;
    std::vector<std::string> stringy;
    const std::vector<int> numby{6,6,6,6,6,6,6,6};

    getline(std::cin, strings);
    stringy.push_back(strings);
    // v has the value of the first element of the stringy vec
    auto v = stringy.begin();
        // iterates throught the vec
        for (auto &i: stringy)
        std::cout << i << "\n";
    // dereferences and reassigns the fist element in stringy vec
    *v = "hello";
    // why is this only displaying "hello" and not the entirety of the vec
    for (auto &i: stringy)
        std::cout << i;

    auto cv = numby.begin();
    std::cout << *cv;
    // ------------------------------------
    std::vector<int> v1{1,2,3,4,5,6,7,8,9};
    std::vector<int> v2(10);
    std::vector<int> v3(10,42);
    std::vector<int> v4{10};
    std::vector<int> v5{10,42};
    std::vector<std::string> v6(10);
    std::vector<std::string> v7{10, "hi"};
    for (auto it = v1.cbegin(); it != v1.end(); ++it)
        std::cout << *it << std::endl;
    for (auto it = v2.cbegin(); it != v2.end(); ++it)
        std::cout << *it << std::endl;
    for (auto it = v3.cbegin(); it != v3.end(); ++it)
        std::cout << *it << std::endl;
    for (auto it = v4.cbegin(); it != v4.end(); ++it)
        std::cout << *it << std::endl;
    for (auto it = v5.cbegin(); it != v5.end(); ++it)
        std::cout << *it << std::endl;
    // ------------------------------------
    std::vector<int> theNumberVec{1,2,3,4,5,6,7,8,9,10};
    for (auto it = theNumberVec.begin(); it != theNumberVec.end(); ++it){
        *it *= 2;
        std::cout << *it << "\n" << std::endl;
        }
    ------------------------------------

    // intilize the vec of type int 
    // 12 12 34 12 45 23 2 5 12 10
    std::vector<int> vecOfNumbers;
    int myNumber, count = 0;
    while(count < 10){
        std::cin >> myNumber;
        // pushes the new numbrers in the vecOfNumbners vect
        vecOfNumbers.push_back(myNumber);
        ++count;
        }
        // create both the front and back default elemetns of the vector
        auto frontEl = vecOfNumbers.begin();
        auto backEl = vecOfNumbers.end() -1;
        // no need for init as its done above
            // while the back itrator is greater than the front iterator
                // increament the front to move it forward and the decrease the back iterator to move it backwards
            // as long as the back (element number) is greater than the front(element number) continue.
        for (   ;frontEl < backEl; ++frontEl, --backEl){
            //add the elements
            int total = *frontEl + *backEl;
                std::cout << "The sum of the " << *frontEl
                          << " and " << *backEl 
                          << " is equal to: " << total 
                          << std::endl;
            }

        for (auto &i: vecOfNumbers){
            std::cout << i << "\n" << std::endl;
        }
        for (auto it = vecOfNumbers.begin(); it != vecOfNumbers.end(); ++it){
            // creates a object to hold the current element in the vector by referencing
                // the iterator operator (*it || it = vecOfNumbers.begin())
            auto curr = *it;
            // creates an obhject that holds the value
                // of the next(adjacent) elements to the curr element 
            auto next = *(++it);
            auto sum = curr + next;
            std::cout << curr << "\t" << next << std::endl;
            std::cout << "The sum of:  " << curr 
                      << " and " << next 
                      << " is equal to: " << sum 
                      << std::endl;
            next = curr;
            }

        for (auto it = vecOfNumbers.cbegin(); it != vecOfNumbers.end(); ++it){
            // creates the object to hold the last element in the vector
            auto last = vecOfNumbers.end()-1;
            // creates the object to hold the first element
            auto fist = vecOfNumbers.begin();
            auto sum = *fist + *last;
            std::cout << sum;
            std::cout << "\n";
        }
        for (auto &i: vecOfNumbers)
            std::cout << i;
}