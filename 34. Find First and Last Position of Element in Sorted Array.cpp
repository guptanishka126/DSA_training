class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res = {-1,-1};
        int left = 0;
        int n = nums.size();
        int right = n-1;
        while(left<=right){
            int mid = (left+right)/2;
            if(nums[mid] < target){
                left = mid+1;
            } else {
                right = mid-1;
            }
        }
        if(left<n && nums[left] == target){
            res[0] = left;
        } else{
            return res;
        }

        right = n-1;
        while(left<=right){
            int mid = left + (right-left)/2;
            if(nums[mid]<=target){
                left = mid+1;
            } else {
                right = mid-1;
            }
        }
        res[1] = right;
        return res;
    }
};
