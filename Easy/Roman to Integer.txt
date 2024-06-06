//https://leetcode.com/problems/roman-to-integer/description/


solution 1 :

class Solution {
public:
    int romanToInt(string s) {
        int res = 0;
        unordered_map <char,int> roman {
            {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}
        };
        for (int i=0;i<s.size();i++)
        {
            if(i == s.size()||roman[s[i]]>=roman[s[i+1]])
            {
                res = res+roman[s[i]];
            }
            else
            {
                res = res-roman[s[i]];
            }
        }
        return res;
    }
};


solution 2:

class Solution {
public:
    int romanToInt(string s) {
        int result = 0;
        int prev = 0;
        
        for(int i = s.size() - 1; i >= 0; i--) {
            int num = 0;
            switch (s[i]) {
                case 'I': num = 1; break;
                case 'V': num = 5; break;
                case 'X': num = 10; break;
                case 'L': num = 50; break;
                case 'C': num = 100; break;
                case 'D': num = 500; break;
                case 'M': num = 1000; break;
            }
            result += (prev <= num) ? num : -num;
            prev = num;
        }
        return result;
    }
};
