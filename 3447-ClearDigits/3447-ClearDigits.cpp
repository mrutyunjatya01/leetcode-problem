// Last updated: 13/07/2026, 16:12:42
class Solution {
public:
    string clearDigits(string s) {
        string ans;
        for(char c:s){
            if(isdigit(c)){
                ans.pop_back();
            }else{
                ans.push_back(c);
            }
        }
        return ans;
    }
};