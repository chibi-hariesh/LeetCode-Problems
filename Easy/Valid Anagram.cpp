// https://leetcode.com/problems/valid-anagram/description/?envType=study-plan-v2&envId=top-interview-150
// Solution 1: 

class Solution {
public:
    bool isAnagram(string s, string t) {
        int map[26]={0};
        if(s.length() != t.length()){
            return false;
        }
        int n = s.length();
        for(int i=0;i<n;i++){
            map[s[i] - 'a']++;
            map[t[i] - 'a']--;
        }
        for(int i=0;i<26;i++){
            if(map[i] != 0){
                return false;
            }
        }
        return true;
    }
};

// Solution 2:

class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        if(s == t){
            return true;
        }
        return false;
    }
};
