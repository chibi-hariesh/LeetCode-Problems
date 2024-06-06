https://leetcode.com/problems/majority-element/

class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        int count=0,check=0;
        for (int i=0;i<size(nums);i++)
        {
            if (count==0)
            {
                check=nums[i];
            }
            if (nums[i]==check)
            {
                count++;
            }
            else
                count--;
            
        }
        return check;
    }
};