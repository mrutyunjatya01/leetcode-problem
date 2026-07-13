// Last updated: 13/07/2026, 16:19:33
class Solution {
public:
    int lengthOfLastWord(string s) {
       int count=0;
       int i=s.size()-1;
       while(i>=0 && s[i]==' '){
        i--;
       }
       while(i>=0 && s[i]!=' '){
        count++;
        i--;
       }
       return count;
    }
};