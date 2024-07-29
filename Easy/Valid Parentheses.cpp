//https://leetcode.com/problems/valid-parentheses/description/

class Solution {
public:
    bool isValid(string s) {
        stack <char> stack;
        for(char c : s){
            if(stack.empty() && (c == '}' || c == ']' || c == ')')){
                return false;
            }
            if((c == '{' || c == '[' || c == '('))
            {
                stack.push(c);
            }
            else if((stack.top() == '{' && c == '}') || (stack.top() == '[' && c == ']') || (stack.top() == '(' && c == ')')){
                stack.pop();
            }
            else{
                return false;
            }
        }
        if (stack.empty())
        return true;
        else
        return false;

    }
};
