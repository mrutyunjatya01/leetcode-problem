// Last updated: 13/07/2026, 16:18:28
class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.length();
        int i=0;
        int j=n-1;

        while(i<j){
            while(i<j && !isalnum(s[i])) i++;
            while(i<j && !isalnum(s[j])) j--;
            if(toupper(s[i])!=toupper(s[j])){
                return false ;
            }
                i++;
                j--;
        }
        return true;
    }
};