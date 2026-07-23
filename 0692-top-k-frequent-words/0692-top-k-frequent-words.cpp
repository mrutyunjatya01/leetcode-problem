class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int>mpp;
        for(string word:words){
            mpp[word]++;
        }
        vector<string>ans;
            vector<pair<string, int>> vec(mpp.begin(), mpp.end());

        sort(vec.begin(), vec.end(), [](auto &a, auto &b) {
            if (a.second == b.second)
                return a.first < b.first;   // Lexicographical order
            return a.second > b.second;     // Higher frequency first
        });
        for(int i=0; i<k; i++){
            
            ans.push_back(vec[i].first);
        }
        return ans;
    }
};