// Last updated: 13/07/2026, 16:14:50
class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
       sort(nums.begin(), nums.end());
       int sum=0;
       for(int i=0; i<nums.size();i+=2){
            sum+=nums[i];
       }
       return sum;
    }
};