// Last updated: 13/07/2026, 16:12:59
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> v(n,0);
        int poIndex=0 ,negIndex=1;
        for(int i=0; i<n; i++){
            if(nums[i]<0){
                v[negIndex]=nums[i];
                negIndex+=2;
            }
            else{
                v[poIndex]=nums[i];
                poIndex+=2;
            }
        }
        return v;
        
    }
};