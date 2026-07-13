// Last updated: 13/07/2026, 16:16:18
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int j;
        for(int i=0; i<n; i++){
            if(nums[i]==0){
                j=i;
                break;
            }
        }
        int k=j+1;
        while(k<n){
            if(nums[k]!=0){
                swap(nums[j],nums[k]);
                j++;
            }
            k++;
        }
    }
};