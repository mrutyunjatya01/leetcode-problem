// Last updated: 13/07/2026, 16:13:30
class Solution {
public:
    int findmax(vector<int>& nums){
        int n=nums.size();
        int maxi=INT_MAX;
        for(int i=0; i<n;i++){
            maxi=max(maxi,nums[i]);
        }
        return maxi;
    }
    int calsum(vector<int>& nums, int d){
        long long total=0;
        int n=nums.size();
        for(int i=0; i<n; i++){
            total+=(nums[i]+d-1)/d;
        }
        return total;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n=nums.size();
        if(n>threshold) return -1;

        int low=1;
        int high=findmax(nums);

        while(low<=high){
            int n=nums.size();
            int mid=low+(high-low)/2;
            if(calsum(nums,mid)<=threshold){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};