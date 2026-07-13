// Last updated: 13/07/2026, 16:17:36
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;
        int el;

        for(int i=0; i<n; i++){
            if(cnt==0){
                cnt++;
                el=nums[i];
            }else if(el==nums[i]){
                cnt++;
            }else{
                cnt--;
            }
        }
        int p=0;
        for(int i=0; i<n; i++){
            if(nums[i]==el){
                p++;
            }
        }
        if(p>=n/2){
            return el;
        }else{
            return 0;
        }
    }
};