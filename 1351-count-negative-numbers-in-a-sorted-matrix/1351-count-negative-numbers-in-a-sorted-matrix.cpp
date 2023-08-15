class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
       int res = 0;
        for(auto col: grid) {
            for(int val: col) {
                if(val < 0) res++;
            }
        }
        return res;  
    }
};