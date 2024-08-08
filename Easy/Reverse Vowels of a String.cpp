//https://leetcode.com/problems/reverse-vowels-of-a-string/description/?envType=study-plan-v2&envId=leetcode-75
class Solution {
public:
    bool isVowel(char c) {
        c = tolower(c);
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    }
        string reverseVowels(string s) {
            cin.tie(0);
            cout.tie(0);
            ios::sync_with_stdio(false);
            int n = s.size();
            int i = 0;
            int j = n - 1;
            while (i < j) {
                if (!isVowel(s[i]))
                    i++;
                if (!isVowel(s[j]))
                    j--;
                if (isVowel(s[i]) && isVowel(s[j])) {
                    swap(s[i], s[j]);
                    i++;
                    j--;
                }
            }
            return s;
        }
    };
