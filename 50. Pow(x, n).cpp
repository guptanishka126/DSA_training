class Solution {
public:
    double myPow(double x, int n) {
        if(n==0){
            return 1;
        } 
        else if(n>0){
            double hp=myPow(x,n/2);
            if(n%2==0){
                return hp*hp;
            } else {
                return x*hp*hp;
            }
        } 
        else {
            double hp = myPow(x,n/2*-1);
            if(n%2==0){
                return 1/(hp*hp);
            } else{
                return 1/(x*hp*hp);
            }
        }
    }
};
