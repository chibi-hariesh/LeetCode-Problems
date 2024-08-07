//https://leetcode.com/problems/maximum-subarray/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        cin.tie(0);
        cout.tie(0);
        ios::sync_with_stdio(false);
        int curr = nums[0];
        int maxi = nums[0];
        for(int i=1;i<nums.size();i++)
        {
            curr = max(nums[i], nums[i]+curr);
            maxi = max(maxi,curr);
        }
        return maxi;
    }
};
