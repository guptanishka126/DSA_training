class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        if(mat.empty() || mat[0].empty()){
            return false;
        }
        int m=mat.size();
        int n=mat[0].size();
        int l=0, r=m*n-1;
        while(l<=r){
            int mid = l+(r-l)/2;
            int mid_v = mat[mid/n][mid%n];
            if(mid_v == target){
                return true;
            } else if(mid_v<target){
                l = mid+1;
            } else{
                r = mid-1;
            }
        }
        return false;
    }
};
