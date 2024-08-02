//https://leetcode.com/problems/longest-palindromic-substring/description/

class Solution {
public:
    bool isPalindrome(const string& s, int left, int right) {
        while (left < right) {
            if (s[left] != s[right]) return false;
            left++;
            right--;
        }
        return true;
    }

    string longestPalindrome(string s) {
        int n = s.size();
        if (n == 0) return "";
        
        int maxLength = 1; // At least one character is a palindrome
        int start = 0;

        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                if (isPalindrome(s, i, j) && (j - i + 1) > maxLength) {
                    start = i;
                    maxLength = j - i + 1;
                }
            }
        }

        return s.substr(start, maxLength);
    }
};
