class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int> seqMap;
        int longest = 0;

        for(int num:nums){
            if(seqMap.find(num) == seqMap.end()){ //ignore duplicates
                int left = seqMap.count(num-1)?seqMap[num-1]:0;
                int right = seqMap.count(num+1)?seqMap[num+1]:0;

                int length = left + 1 + right;
                seqMap[num] = length;

                seqMap[num - left] = length; //update left boundary
                seqMap[num + right] = length; // update right boundary

                longest = max(longest,length);
            }
        }
        return longest;
    }
};
