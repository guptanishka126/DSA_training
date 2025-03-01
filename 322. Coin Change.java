class Solution {
    public int coinChange(int[] coins, int amount) {
        int dp[] = new int[amount+1];
        Arrays.fill(dp,-1);
        dp[0] = 0;
        int ans = min_coins(amount, dp, coins);
        //System.out.println(ans);
        if(ans==Integer.MAX_VALUE){
            return -1;
        }
        return ans;
    }
    public int min_coins(int amount,int [] dp,int[] coins){
        if(amount==0){
            return 0;
        }
        int ans=Integer.MAX_VALUE;
        for(int i=0;i<coins.length;i++){
            if(amount-coins[i]>=0){
                int subAns=0;
                if(dp[amount-coins[i]]!=-1){
                    subAns = dp[amount-coins[i]];
                } else{
                    subAns = min_coins(amount-coins[i],dp,coins);
                }
                if(subAns!=Integer.MAX_VALUE && subAns+1<ans){
                    ans = subAns+1;
                }
            }
        }
        dp[amount] = ans;
        return ans;
    }
}
