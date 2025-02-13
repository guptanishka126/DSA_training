//map container string and int
#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> m;
    
    //Inserting elements
    m["Apple"] = 1;
    m["Anonymous"] = 3;
    m["Backstabbing"] = 4;
    
    //Adding new key value pair
    m["Akkineni"] = 2;
    
    //Accessing elements
    cout << "Key 2 has value: " << m["Apple"] << endl;
    
    //Iterating over map
    for(auto& pair : m){
        cout << "Key: " <<  pair.first << ", Value: " << pair.second << endl;
    }
    return 0;
}