class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        if(x<10) return true;
        int ori = x;
        long rev = 0;
        while(x>0){
            rev = rev * 10 + x%10;
            x/=10;
        }
        return ori == rev;
    }
};
