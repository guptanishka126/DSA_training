class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> curr_sub;
        backtrack(0,nums,curr_sub,res);
        return res;
    }
private:
    void backtrack(int start, vector<int>& nums, vector<int>& curr_sub, vector<vector<int>>& res){
        res.push_back(curr_sub);
        for(int i=start;i<nums.size();++i){
            curr_sub.push_back(nums[i]);
            backtrack(i+1,nums,curr_sub,res);
            curr_sub.pop_back();
        }
    }
};
