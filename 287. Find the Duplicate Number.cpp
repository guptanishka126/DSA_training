#include<unordered_map>
using namespace std;
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> um;
        
        for(const auto& i : nums){
            if(um[i]){
                return i;
            }
            um[i]++;
        }
        return 0;
    }
};
