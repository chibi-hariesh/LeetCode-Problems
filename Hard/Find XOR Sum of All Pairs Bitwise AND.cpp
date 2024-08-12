//https://leetcode.com/problems/find-xor-sum-of-all-pairs-bitwise-and/description/

class Solution {
public:
    int getXORSum(vector<int>& arr1, vector<int>& arr2) {
        cin.tie(0);
        cout.tie(0);
        ios::sync_with_stdio(false);
        int sum1 = 0;
        int sum2 = 0;
        for (int i = 0; i < arr1.size(); i++) {
            sum1 = sum1 ^ arr1[i];
        }
        for (int j = 0; j < arr2.size(); j++) {
            sum2 = sum2 ^ arr2[j];
        }
        return sum1 & sum2;
    }
};
