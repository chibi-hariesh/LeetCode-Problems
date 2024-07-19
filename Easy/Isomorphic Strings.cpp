// https://leetcode.com/problems/isomorphic-strings/?envType=study-plan-v2&envId=top-interview-150

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }
        int n = s.length();
        unordered_map<char, char> s_t;
        unordered_map<char, char> t_s;
        for (int i = 0; i < n; i++) {
            char s_c = s[i];
            char t_c = t[i];
            if (s_t.find(s_c) != s_t.end()) {
                if (s_t[s_c] != t_c) {
                    return false;
                }
            } else {
                s_t[s_c] = t_c;
            }

            if (t_s.find(t_c) != t_s.end()) {
                if (t_s[t_c] != s_c) {
                    return false;
                }
            } else {
                t_s[t_c] = s_c;
            }
        }
        return true;
    }
};
