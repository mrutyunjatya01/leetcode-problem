// Last updated: 13/07/2026, 16:14:47
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        int dup=-1;
        int miss=-1;

        for(int i=0; i<n; i++){
            int id=abs(nums[i])-1;

            if(nums[id]<0){
                dup=abs(nums[i]);
            }else{
                nums[id]=-nums[id];
            }
        }
        for(int i=0; i<n; i++){
            if(nums[i]>0){
                miss=i+1;
                break;
            }
        }
        return {dup, miss};
    }
};