class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> ssum;
        ssum[0]=1;
        int sum=0,count=0;
        for(int num: nums){
            sum += num;

            if(ssum.find(sum-k) != ssum.end()){
                count += ssum[sum-k];
            }
            ssum[sum]++;
        }
        return count;
    }
};
