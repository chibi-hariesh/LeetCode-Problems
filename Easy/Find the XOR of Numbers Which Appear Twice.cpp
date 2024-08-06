//https://leetcode.com/problems/find-the-xor-of-numbers-which-appear-twice/description/
class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        unordered_map <int, int> map;
        for(auto x : nums){
            map[x]++;
        }
        int res = 0;
        for(const auto& pair : map){
            if(pair.second == 2){
                res = res ^ pair.first;
            }
        }
        return res;
    }
};
