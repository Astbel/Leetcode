/*
暴力解
列舉所有數組看是否為目標值

內循環j+1的原因是題目說明數組內不能重複
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();++i)
        {
            for(int j=i+1;j<nums.size();++j)
            {
                int sum=nums[i]+nums[j];
                if(sum==target)
                {
                  return{i,j};   
                }
            }
         
        }
        return {};
    }
};