//https://leetcode.com/problems/product-of-array-except-self/
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        cin.tie(0);
        cout.tie(0);
        ios::sync_with_stdio(false);

        int n = nums.size();
        vector<int> result(n, 1);
        int suffix = 1;
        result[0] = 1;
        for (int i = 1; i < nums.size(); i++) {
            result[i] = result[i - 1] * nums[i - 1];
        }
        for (int i = nums.size() - 1; i >= 0; i--) {
            result[i] = result[i] * suffix;
            suffix = suffix * nums[i];
        }
        return result;
    }
};
