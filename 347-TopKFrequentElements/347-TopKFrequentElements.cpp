// Last updated: 13/07/2026, 16:15:57
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        int n=nums.size();

        for(int i=0; i<n; i++){
            mpp[nums[i]]++;
        }

        priority_queue<
        pair<int,int>,
        vector<pair<int,int>>,
        greater<pair<int,int>>
        >pq;

        for(auto it: mpp){
            pq.push({it.second, it.first});
            if (pq.size()>k){
                pq.pop();
            }
        }

        vector<int>vt;

        while(!pq.empty()){
            vt.push_back(pq.top().second);
            pq.pop();
        }
        return vt;

    }
};