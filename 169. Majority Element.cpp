class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> unm;
        for(int i=0;i<n;i++){
            unm[nums[i]]++;
        }

        for(auto& i:unm){
            if(i.second>(n/2)){
                return i.first;
            }
        }
        return -1;
    }
};
