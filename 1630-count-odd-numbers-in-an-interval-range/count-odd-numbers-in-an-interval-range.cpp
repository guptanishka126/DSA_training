class Solution {
public:
    int countOdds(int low, int high) {
        int odd_count =0;
        for(int i=low;i<=high;i++){
            if(i%2!=0){
                odd_count++;
            }
        }
        return odd_count;
    }
};