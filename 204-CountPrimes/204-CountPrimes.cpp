// Last updated: 13/07/2026, 16:17:04
class Solution {
public:
    int countPrimes(int n) {
        vector<bool> prime(n+1, true);
        prime[0]=prime[1]=false;

        int cnt=0;
        for(int i=2; i*i<n; i++){
            if(prime[i]){
                for(int j=i*i; j<n;j+=i){
                    prime[j]=false;
                }
            }
        }
        for(int i=0; i<n; i++){
            if(prime[i]){
                cnt++;
            }
        }
        return cnt;
    }
};