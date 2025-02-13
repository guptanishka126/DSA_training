// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int countPairs(vector<int>& arr, int target){
    unordered_map<int,int> m;
    int count = 0;
    for(int i=0;i<arr.size();i++){
        int com = target-arr[i];
        if(m.find(com)!=m.end()){
            count += m[com];
        }
        m[arr[i]]++;
        cout << "Compliment "<< com <<endl;
        cout<<"Index of com i.e m[com] "<<m[com]<<endl;
        cout<<"Count "<<count<< endl;
    }
    return count;
    
}
int main() {
    vector<int> arr = {1,5,7,-1,5};
    countPairs(arr,6);

    return 0;
}