// Last updated: 13/07/2026, 16:15:18
class Solution {
public:
    string frequencySort(string s) {
        
        unordered_map<char , int >mpp;
        for(auto it:s){
            mpp[it]++;
        }
       priority_queue<pair<int, int> > maxHeap;

        for(auto it: mpp){
            maxHeap.push({it.second,it.first});
        }
        string ans="";
        while(maxHeap.size() > 0){
            int freq=maxHeap.top().first;
            char c=maxHeap.top().second;
            maxHeap.pop();
            while(freq--){
                ans+=c;
            }
        }
    return ans;
    }
};