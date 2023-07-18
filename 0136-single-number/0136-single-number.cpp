class Solution {
public:
    int singleNumber(vector<int>& nums) {
      map<int, int> m;

    for(int i = 0; i < nums.size(); i++) {
        m[nums[i]]++;
    }

    for(auto const & [key, value]: m) {
        if(value == 1) {
            return key;
        }
    }

    return -1;
   
    }
};