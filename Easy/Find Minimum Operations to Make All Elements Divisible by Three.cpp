//https://leetcode.com/problems/find-minimum-operations-to-make-all-elements-divisible-by-three/description/

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int cnt=0;
        for(int x : nums){
            if(x%3 != 0){
                cnt++;
            }
        }
        return cnt;
    }
};
