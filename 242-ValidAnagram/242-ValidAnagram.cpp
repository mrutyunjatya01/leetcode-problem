// Last updated: 13/07/2026, 16:16:38
class Solution {
public:
    bool isAnagram(string s, string t) {
       sort(s.begin(),s.end());
       sort(t.begin(),t.end());
       return s==t;
    }
};