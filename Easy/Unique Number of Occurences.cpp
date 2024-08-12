//https://leetcode.com/problems/unique-number-of-occurrences/

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        cin.tie(0);
        cout.tie(0);
        ios::sync_with_stdio(false);
        map<int, int> m_map;

        for(int i = 0; i < arr.size(); i++){
            m_map[arr[i]] = m_map[arr[i]] + 1;
        }

        set<int> m_set;

        for(auto val : m_map){
            if(!m_set.insert(val.second).second){
                return false;
            }
        }

        return true;
    }
};
