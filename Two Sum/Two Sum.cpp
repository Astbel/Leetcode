/*
 Hash Table 存取陣列內所有元素
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>indies;  //建立hash table
        for(int i=0;i<nums.size();++i)
            indies[nums[i]]=i;   //儲存元素進hash table
        for(int i=0;i<nums.size();++i){
            int left=target-nums[i];  //變數存取目標值減去差值,從差值中找元素
            //hashtable 中因為不能重複選取元素所以需要近型限制
            if(indies.count(left)&&indies[left]!=i)
                return {i,indies[left]};
        }
        return {};
    }
};