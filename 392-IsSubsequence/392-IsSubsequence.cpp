// Last updated: 13/07/2026, 16:15:41
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0;
        int j=0;
        while(i<s.size() && j<t.size()){
            if(s[i]==t[j]){
                i++;
            }
            j++;
        }
        return i==s.size();
    }
};