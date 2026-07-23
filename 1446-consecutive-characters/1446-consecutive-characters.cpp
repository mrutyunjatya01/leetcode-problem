class Solution {
public:
    int maxPower(string s) {
       int maxi=1;
       int i=0; 
       int j=1;
       while(j<s.size()){
        if(s[j]==s[j-1]){
            maxi=max(maxi,j-i+1);
        }else{
            i=j;
        }
        j++;
       } 
       return maxi;
    }
};