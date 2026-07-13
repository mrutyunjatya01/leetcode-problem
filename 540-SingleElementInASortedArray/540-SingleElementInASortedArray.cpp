// Last updated: 13/07/2026, 16:15:02
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low=0; 
        int high=nums.size()-1;
        int n=nums.size();
        if(n==1) return nums[0];
        if(nums[0]!=nums[1]) return nums[0];
        if(nums[n-1]!=nums[n-2]){
            return nums[n-1];
        }
        low=low+1;
        high=nums.size()-2;

        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]!=nums[mid+1] && nums[mid]!=nums[mid-1]) return nums[mid];

            if(mid%2==1 && nums[mid]==nums[mid-1] || mid%2==0 && nums[mid]==nums[mid+1]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return -1;
    }
};