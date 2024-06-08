https://leetcode.com/problems/palindrome-number/description/

class Solution 
{
public:
bool isPalindrome(int x) 
{
    bool res;
    long int rem,rev=0,tag;
        tag=x;
    if (x<0)
        return false;
    else
    {
        while (x!=0)
        {
            rem=x%10;
            x=x/10;
            rev=(rev*10)+rem;
        }
    }
        if(tag==rev)
            return true;
        else
            return false;
}
};