// Last updated: 13/07/2026, 16:13:40
class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& nums) {
        vector<vector<int>> ans;

        sort(nums.begin(), nums.end());
        int n=nums.size();
        int mini=INT_MAX;
        for(int i=1; i<n; i++){
            mini=min(mini,nums[i]-nums[i-1]);
        }

        for(int i=1; i<n; i++){
            if(nums[i]-nums[i-1]==mini){
                ans.push_back({nums[i-1],nums[i]});
            }
        }
        return ans;
    }
};