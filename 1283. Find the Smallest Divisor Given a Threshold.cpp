class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int l=1;
        int r = *max_element(nums.begin(),nums.end());
        while(l<r){
            int mid = l+(r-l)/2;
            int sum=0;
            for(int num:nums){
                sum += ceil((double)num/mid);
            }
            if(sum > threshold){
                l = mid+1;
            } else{
                r = mid;
            }
        }
        return l;
    }
};
