class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int max_sum=INT_MIN;
       int max_summ=0;
       for(int i=0;i<nums.size();i++){
           max_summ+=nums[i];

           if(max_sum<max_summ){
               max_sum=max_summ;
           }
           if(max_summ<0){
               max_summ=0;
           }
       }
       return max_sum;
    }
};
       
       
       
       
       
       
    