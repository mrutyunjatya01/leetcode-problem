// Last updated: 16/07/2026, 16:41:40
class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int>ans;

        // Approach:1  Generate Sequential Numbers

        int num;
        for(int i=1; i<=8; i++){
            num=i;
            for(int j=i+1; j<=9; j++){
                num=num*10+j;

                if(num>=low && num<=high){
                    ans.push_back(num);
                }
            }
        }
        sort(ans.begin(), ans.end());
         return ans;

    // Time Complexity: O(1) (only ~36 numbers are ever generated)
    // Space Complexity: O(1) (excluding output).



    // Approach 2: BFS (Breadth-First Search)

    
    //    queue<int>q;
    //    for(int i=1; i<=9; i++){
    //     q.push(i);
    //    }
    //    int num;

    //    while(!q.empty()){
    //         int num=q.front();
    //         q.pop();

    //         if(num>=low && num<=high){
    //                 ans.push_back(num);
    //             }
    //         int lastdigit=num%10;
    //         if(lastdigit!=9){
    //             int nextnum=(num*10)+(lastdigit+1);
    //             if(nextnum<=high){
    //                 q.push(nextnum);
    //             }
            
    //     }

    // }
    //  return ans;
    }
};

// Time Complexity: O(1)
// space Complexity: O(1)
