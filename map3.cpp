// Online C++ compiler to run C++ program online
#include <iostream>
#include <map>
#include <vector>
using namespace std;
//count the frequency of the elements of an array

int main() {
    vector<int> arr = {1,2,3,3,4,2,5,6,3};
    map<int, int> m;
    
    //passing the values 
    for(auto& i : arr){
        m[i]++;
    }
    
    //Printing the frequency evaluated
    for(auto& f : m){
        cout << "Key: " << f.first << ", Value: " << f.second <<endl;
    }
    
    return 0;
}