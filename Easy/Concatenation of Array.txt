//https://leetcode.com/problems/concatenation-of-array/description/

class Solution 
{
public:
    vector<int> getConcatenation(vector<int>& nums) 
    {
        vector <int> ans(2*nums.size());
        for (int i=0;i<nums.size();i++)
        {
            ans[i]=nums[i];
        }
        for (int i=0;i<nums.size();i++)
        {
            ans[nums.size()+i]=nums[i];
        }
        return ans;
    }
};