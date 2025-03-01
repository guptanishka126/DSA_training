class Solution {
    public int[] countBits(int n) {
        int []ans = new int[n+1];
        ans[0] = 0;
        int temp = 0;
        for(int i=0;i<=n;i++){
            temp = i/2;
            if(i%2==0){
                ans[i] = ans[temp];
            }
            else{
                ans[i] = 1+ans[temp];
            }
        }
        return ans;
        
    }
    
}
