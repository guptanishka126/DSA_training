class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n= nums.size();
        vector<int> result(n,-1);
        
        stack<int> s;
        for(int i=0;i<2*n;i++){
            int currentindex=i%n;
            while(!s.empty() && nums[currentindex]>nums[s.top()]){
                result[s.top()] = nums[currentindex];
                s.pop();
            }
            if(i<n){
                s.push(currentindex);
            }
        }
        return result;
    }
};
