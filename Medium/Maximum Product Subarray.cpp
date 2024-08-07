//https://leetcode.com/problems/maximum-product-subarray/

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        cin.tie(0);
        cout.tie(0);
        ios::sync_with_stdio(false);

        if (nums.empty())
            return 0;

        double currMax = nums[0];
        double currMin = nums[0];
        double result = nums[0];

        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] < 0) {
                swap(currMax, currMin);
            }

            currMax = max(static_cast<double>(nums[i]), nums[i] * currMax);
            currMin = min(static_cast<double>(nums[i]), nums[i] * currMin);

            result = max(result, currMax);
        }

        return static_cast<int>(result);
    }
};
