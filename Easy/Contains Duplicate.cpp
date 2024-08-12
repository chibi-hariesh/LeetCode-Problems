//https://leetcode.com/problems/contains-duplicate/description/
//solution 1:
class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        std::unordered_set<int> seen;
        for (int x : nums) {
            if (seen.find(x) != seen.end()) {
                return true;
            }
            seen.insert(x);
        }
        return false;
    }
};

//solution 2:
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> map;
        for(int x : nums){
            if(map.find(x) != map.end()){
                return true;
            }
            else{
                map[x]++;
            }
        }
        return false;
    }
};
