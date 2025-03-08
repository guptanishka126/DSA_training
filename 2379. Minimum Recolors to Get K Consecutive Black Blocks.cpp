class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int n = blocks.length();
        int minrecolors = k;
        for(int i=0;i<=n-k;++i){
            int recolorsneeded=0;
            for(int j=i;j<i+k;++j){
                if(blocks[j]=='W'){
                    recolorsneeded++;
                }
            }
            minrecolors = min(minrecolors,recolorsneeded);
        }
        return minrecolors;
    }
};
