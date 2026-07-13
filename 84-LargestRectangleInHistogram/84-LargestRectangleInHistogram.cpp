// Last updated: 13/07/2026, 16:18:55
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();

        stack<int>st;
        int ans=0;
        for(int i=0; i<=n; i++){
            while(!st.empty() && (i==n || heights[st.top()]>=heights[i])){
                
                int h=heights[st.top()];
                st.pop();

                int right=i;
                int left;

                if(st.empty()){
                    left=-1;
                }else{
                    left=st.top();
                }
                int width=right-left-1;
                ans=max(ans,width * h);
            }
            st.push(i);
        }
        return ans;
    }
};