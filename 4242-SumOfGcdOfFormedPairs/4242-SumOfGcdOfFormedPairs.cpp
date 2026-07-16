// Last updated: 16/07/2026, 16:56:37
class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        
        int n=nums.size();
        int maxi=INT_MIN;
        vector<int>prefix;
        for(int i=0; i<n; i++){
            maxi=max(maxi, nums[i]);
            int g=gcd(nums[i], maxi);
            prefix.push_back(g);
        }
        
        long long sum=0;
        sort(prefix.begin(), prefix.end());
        for(int i=0; i<n/2; i++){
            sum+=gcd(prefix[i], prefix[n-i-1]);
        }
        return sum;
    }
};