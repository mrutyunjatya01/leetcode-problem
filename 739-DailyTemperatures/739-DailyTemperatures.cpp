// Last updated: 13/07/2026, 16:14:27
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int>ans(temperatures.size(),0);
        stack<int>st;
        int j=0;
        for(int i=temperatures.size()-1; i>=0;i--){
            while(!st.empty() &&  temperatures[st.top()] <= temperatures[i]){
                st.pop();
            }

            if(!st.empty()){
                ans[i]=st.top()-i;
            }
            st.push(i);
        }
        return ans;
    }
};