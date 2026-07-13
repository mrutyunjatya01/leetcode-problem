// Last updated: 13/07/2026, 16:19:53
class Solution {
public:
    int first(vector<int> & nums, int low , int high, int target){
        int f=-1;
        while(low<=high){
        int mid=low+(high-low)/2;
        if(nums[mid]==target){
            f=mid;
            high=mid-1;
        }
        else if(nums[mid]<target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
        }
        return f;
    }
    int second(vector<int> & nums, int low , int high, int target){
        int s=-1;
        while(low<=high){
        int mid=low+(high-low)/2;
        if(nums[mid]==target){
            s=mid;
            low=mid+1;
        }
        else if(nums[mid]<target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
        }
        return s;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0; 
        int high=n-1;
        int mid=low+(high-low)/2;
        int f=first(nums, low , high, target);
        if(f==-1) return {-1, -1};
        int s=second(nums, low, high, target);
        return {f, s};
    }
};