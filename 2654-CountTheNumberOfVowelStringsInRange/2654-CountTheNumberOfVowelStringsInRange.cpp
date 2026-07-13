// Last updated: 13/07/2026, 16:12:40
class Solution {
public:
    bool isvowel(char ch){
        return ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ;
    }
    int vowelStrings(vector<string>& words, int left, int right) {
        int n=words.size();
        int cnt=0;
        for(int i=left; i<=right; i++){
            string s=words[i];
            if(isvowel(s.front()) && isvowel(s.back())){
                cnt++;
            }
        }
        return cnt;
    }
};