class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        unordered_map<int,int> id;

        for(const auto& pair:nums1){
            id[pair[0]]+=pair[1];
        }
        for(const auto& pair:nums2){
            id[pair[0]] += pair[1];
        }
        vector<vector<int>> result;
        for(const auto& i:id){
            result.push_back({i.first,i.second});
        }
        sort(result.begin(),result.end(), [](const vector<int>& a, const vector<int>& b){
            return a[0] < b[0];
        });
        return result;
    }
};