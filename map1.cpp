// Online C++ compiler to run C++ program online
//map associative cont.
#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> m;
    
    //Inserting elements
    m[1] = "One";
    m[3] = "Three";
    m[2] = "Two";
    
    //Adding new key value pair
    m[4] = "Four";
    
    //Accessing elements
    cout << "Key 2 has value: " << m[2] << endl;
    
    //Iterating over map
    for(auto& pair : m){
        cout << "Key: " <<  pair.first << ", Value: " << pair.second << endl;
    }
    return 0;
}