//https://leetcode.com/problems/redistribute-characters-to-make-all-strings-equal/
class Solution {
public:
    bool makeEqual(vector<string>& words) {
        int n = words.size();
        unordered_map <int ,int> map;
        for (auto x : words){
            for(char ch : x){
                map[ch]++;
            }
        }
        for(auto x : map){
            if(x.second % n != 0) return false;
        }
        return true;
    }
};
