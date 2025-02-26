class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> unm;
        stack<int> s;

        for(int num:nums2){
            while(!s.empty() && s.top() < num){
                unm[s.top()] = num;
                s.pop();
            }
            s.push(num);
        }

        vector<int> ans;
        for(int num:nums1){
            ans.push_back(unm.count(num)?unm[num]:-1);
        }
        return ans;
    }
};
