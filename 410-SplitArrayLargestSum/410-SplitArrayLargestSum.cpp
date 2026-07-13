// Last updated: 13/07/2026, 16:15:29
class Solution {
public:
    int countSubarray(vector<int>& nums,int maxallow){
        long long currentSum=0; 
        int partitions=1;
        for(int i=0; i<nums.size(); i++){
            if(currentSum+nums[i]<=maxallow){
                currentSum+=nums[i];
            }
            else{
                partitions++;
                currentSum=nums[i];
            }
        }
        return partitions;
    }
    
    int splitArray(vector<int>& nums, int k) {
        int n=nums.size();
        if(k>n) return -1;
        int low=*max_element(nums.begin(), nums.end());
        int high=accumulate(nums.begin(), nums.end(), 0);

        while(low<=high){
            int mid=low+(high-low)/2;
            int reqParttion=countSubarray(nums, mid);
            if(reqParttion>k){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return low;
    }
};