// Last updated: 13/07/2026, 16:19:02
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans={{}};

        for(int x:nums){
            int n=ans.size();
            for(int i=0; i<n; i++){
                vector<int>cur=ans[i];
                cur.push_back(x);
                ans.push_back(cur);
            }
        }
        return ans;

    }
};