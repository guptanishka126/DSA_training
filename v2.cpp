// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> words = {"apple","banana","cherry"};
    
    words.push_back("orange");
    
    for(const string word : words){
        cout << word << " ";
    }

    return 0;
}