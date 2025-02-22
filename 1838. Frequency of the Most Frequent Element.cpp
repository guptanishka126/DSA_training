class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(begin(nums),end(nums));
        uint l = 0, r = 1, incrementsRequired = 0;
        for(; r < size(nums); r++){
            incrementsRequired += (nums[r] - nums[r - 1]) * (r - l);
            if(incrementsRequired > k)
                incrementsRequired -= (nums[r] - nums[l++]);              
        }
        return r-l;
    }
};
