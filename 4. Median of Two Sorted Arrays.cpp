class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size()>nums2.size()){
            swap(nums1,nums2);
        }
        int m=nums1.size();
        int n=nums2.size();
        int min=0, max=m, len=(m+n+1)/2;
        while(min<=max){
            int i=(min+max)/2;
            int j=len-i;
            if(i<m && nums2[j-1]>nums1[i]){
                min = i+1;
            } else if(i>0 && nums1[i-1]>nums2[j]){
                max = i-1;
            } else{
                int max_lft=0;
                if(i==0){
                    max_lft=nums2[j-1];
                } else if(j==0){
                    max_lft=nums1[i-1];
                } else{
                    max_lft = std::max(nums1[i-1],nums2[j-1]);
                }

                if((m+n)%2==1){
                    return max_lft;
                }

                int min_rht=0;
                if(i==m){
                    min_rht=nums2[j];
                } else if(j==n){
                    min_rht=nums1[i];
                } else{
                    min_rht=std::min(nums1[i],nums2[j]);
                }
                return (max_lft + min_rht)/2.0;
            }
        }
        throw invalid_argument("Array list is not sorted.");
    }
};
