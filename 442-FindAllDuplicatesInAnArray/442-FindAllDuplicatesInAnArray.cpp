// Last updated: 15/07/2026, 00:40:44
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
    //    unordered_map<int,int>mpp;

    //    if(nums.size()==1){
    //     return {};
    //    }
    //    for(int i=0; i<nums.size(); i++){
    //     mpp[nums[i]]++;
    //    }
    //     vector<int> ans;

    //     for(auto &it: mpp){
    //         if(it.second==2){
    //             ans.push_back(it.first);
    //         }
    //     }
    //    return ans;

    //time complexity: O(n)
    //space complexity: O(n) 

    // this can be solution but we need to optimize it becuase  constrain is " we have to use O(1) space complexity not o(n)"
    vector<int>ans;
    int n=nums.size();
    for(int i=0; i<n; i++){
        int index=abs(nums[i])-1;
        if(nums[index]<0){
            ans.push_back(abs(nums[i]));
        }else{
            nums[index]*=-1;
        }
    }
    return ans;

    }
};

//time complexity: O(n)
//space complexity: O(1)