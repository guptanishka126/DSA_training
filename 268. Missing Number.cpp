class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int e = nums.size();
        for(int i=0; i<nums.size(); i++){
            e += i-nums[i];
        }
        return e;
    }
};
