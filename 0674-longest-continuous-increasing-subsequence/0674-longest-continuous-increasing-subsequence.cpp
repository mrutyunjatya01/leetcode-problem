class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int maxi = 1;
        int i = 0;
        int j = 1;
        int n = nums.size();
        while (j < n) {
            if (nums[j] > nums[j - 1]) {
                maxi = max(maxi, j - i + 1);
            } else {
                i = j;
            }
            j++;
        }
        return maxi;
    }
};