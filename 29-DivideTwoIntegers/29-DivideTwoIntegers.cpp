// Last updated: 13/07/2026, 16:19:58
class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend==INT_MIN && divisor==-1) return INT_MAX;
        return dividend/divisor;
    }
};