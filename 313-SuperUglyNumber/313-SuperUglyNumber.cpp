// Last updated: 13/07/2026, 16:16:13
class Solution {
public:
    int nthSuperUglyNumber(int n, vector<int>& primes) {
        int k=primes.size();

        vector<long long > dp(n);
        dp[0]=1;
        vector<int>idx(k,0);

        for(int i=1; i<n; i++){
            long long nextval=LLONG_MAX;

            for(int j=0; j<k; j++){
                nextval=min(nextval, primes[j] * dp[idx[j]]);
            }

            dp[i]=nextval;

            for(int j=0; j<k; j++){
                if(primes[j] * dp[idx[j]]==nextval){
                    idx[j]++;
                }
            }
        }
        return dp[n-1];
    }
};