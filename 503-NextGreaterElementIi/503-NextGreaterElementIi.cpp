// Last updated: 14/07/2026, 14:21:26
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        stack<int> st;

        for (int i = n * 2 - 1; i >= 0; i--) {
            int curIndex = i % n;
            while (!st.empty() && st.top() <= nums[curIndex]) {
                st.pop();
            }

            if (i < n) {
                if (st.empty()) {
                    ans[curIndex] = -1;
                } else {
                    ans[curIndex] = st.top();
                }
            }
            st.push(nums[curIndex]);
        }
        return ans;
    }
};