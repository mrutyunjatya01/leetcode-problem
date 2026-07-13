// Last updated: 13/07/2026, 16:18:20
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int x=0;
        for(int i=0; i<nums.size(); i++){
            x=x^nums[i];
        }
        return x;
    }
};