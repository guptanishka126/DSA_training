// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> a = {1,2,3,4};
    
    a.push_back(5);
    a.push_back(6);
    
    for(auto& i : a){
        cout << i << " ";
    }

    return 0;
}