//https://leetcode.com/problems/is-subsequence/

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int size_s = s.size();
        int size_t = t.size();

        int i=0,j=0;

        while(j<size_t)
        {
            if(s[i]==t[j])
            {
                i++;
            }
            j++;        
        }
        return i==size_s;
    }
};