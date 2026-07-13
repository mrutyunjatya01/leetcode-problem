// Last updated: 13/07/2026, 16:13:52
class Solution {
public:
    int cal(vector<int>& weights, int cap){
        int load=0;
        int days=1;
        for(int i=0; i<weights.size();i++){
            if(load+ weights[i]>cap){
                days++;
                load=weights[i];
            }
            else{
               load+=weights[i];
            }
        }
        return days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low= *max_element(weights.begin(), weights.end());
        int high= accumulate(weights.begin(), weights.end(),0);

        while(low<=high){
            int mid=low+(high-low)/2;
            int dayReq=cal(weights, mid);
            if(dayReq<=days){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};