// Last updated: 13/07/2026, 16:17:46
class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n=nums.size();
        if(n<2) return 0;
       sort(nums.begin(), nums.end());
        int maxLen=0;
       for(int i=1; i<n; i++){
        int len=nums[i]- nums[i-1];
        maxLen=max(maxLen, len);
       } 
       return maxLen;
    }
};