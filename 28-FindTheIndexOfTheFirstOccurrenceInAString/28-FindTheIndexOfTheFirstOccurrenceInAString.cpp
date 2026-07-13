// Last updated: 13/07/2026, 16:20:00
class Solution {
public:
    int strStr(string haystack, string needle) {
       int pos = haystack.find(needle);
        return (pos == string::npos) ? -1 : pos; 
    }
};