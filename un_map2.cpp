
//frequency of elements using unordered map and vector
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {1,2,3,4,5,6,7,8,9,3,4,2,2,1,4,4,2,6,7,4,3,2,9};
    unordered_map<int,int> um;
    
    for(auto& i : vec){
        um[i]++;
    }
    
    for(auto& f : um){
        cout << "Key: " << f.first << ", Value: " << f.second << endl;
    }

    return 0;
}