// Last updated: 13/07/2026, 16:15:04
class Solution {
public:
    bool detectCapitalUse(string s) {
        int n=s.length();
        int cnt=0;
        for(int i=0; i<n; i++){
            if(s[i]==toupper(s[i])){
                cnt++;
            }
        }
        if(cnt==n){
            return true;
        }else if(cnt==1 && s[0]==toupper(s[0])) {
            return true;
        }else if(cnt==0){
            return true;
        }else{
            return false;
        }
    }
};