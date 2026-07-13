// Last updated: 13/07/2026, 16:12:50
class Solution {
public:
    long long sumAndMultiply(int n) {
        long long x=0;
        int sum=0;
        int place=1;
        while(n>0){
            int rem=n%10;
            if(rem!=0){
                x+= 1LL * rem * place;
                sum+=rem;
                place*=10;
            }
            n/=10;
        }
        return x*sum;
    }
};