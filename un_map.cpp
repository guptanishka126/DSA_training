// Online C++ compiler to run C++ program online
//unordered_map me stack ki tarah se store hota h maybe data
#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<string, int> umap;
    
    //Adding key-value pairs
    umap["cat"] = 5;
    umap["dog"] = 3;
    umap["bird"] = 7;
    
    //Iterating over unordered map (order is not guaranteed)
    for(auto& pair : umap){
        cout << pair.first << " -> " << pair.second << endl;
    }
    
    return 0;
}