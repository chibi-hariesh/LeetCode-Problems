//https://leetcode.com/problems/group-anagrams/description/

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        unordered_map <string, vector<string>> map;
        for(string originalWord : strs){
            string sortWord = originalWord;
            sort(sortWord.begin(), sortWord.end());
            map[sortWord].push_back(originalWord);
        }
        vector<vector<string>> groups;
        for(const auto &pair : map){
            groups.push_back(pair.second);
        }
        return groups;
    }
};
