//https://leetcode.com/problems/top-k-frequent-elements/description/

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> org;
        for(int num : nums){
            org[num]++;
        }
        
        
        multimap<int, int, greater<int>> dup;
        for(const auto& x : org){
            dup.insert({x.second, x.first});
        }
        
        vector<int> res;
        for(const auto& n : dup){
            if(k > 0) {
                res.push_back(n.second);  
                k--;
            }
        }
        
        return res;  
    }
};
