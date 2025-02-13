// Online C++ compiler to run C++ program online
//vetcor string array and concatenating ! sign
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> words = {"apple","banana","cherrry"};
    
    //Adding one more element to the lsit and after that applying the modifications
    words.push_back("guava");
    
    //Modify the elements
    for(auto& word : words){
        word += "!";
    }
    //Print the modified vector
    for(const auto& word : words){
        cout << word << " ";
    }

    return 0;
}