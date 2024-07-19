// https://leetcode.com/problems/word-pattern/description/?envType=study-plan-v2&envId=top-interview-150

class Solution {
public:
    bool wordPattern(string pattern, string s) {
        istringstream iss(s);
        string word;
        unordered_map<char, string> p_s;
        unordered_map<string, char> s_p;

        int patternLength = pattern.length();
        int wordCount = 0;

        while (iss >> word) {
            if (wordCount >= patternLength) {
                return false;
            }

            char p_char = pattern[wordCount];

            if (p_s.find(p_char) != p_s.end()) {
                if (p_s[p_char] != word) {
                    return false;
                }
            } else {
                p_s[p_char] = word;
            }

            if (s_p.find(word) != s_p.end()) {
                if (s_p[word] != p_char) {
                    return false;
                }
            } else {
                s_p[word] = p_char;
            }

            wordCount++;
        }

        return wordCount == patternLength;
    }
};
