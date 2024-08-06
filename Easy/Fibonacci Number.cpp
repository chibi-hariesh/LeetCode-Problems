//https://leetcode.com/problems/fibonacci-number/description/

class Solution {
public:
    int fib(int num) {
        if (num == 0)
            return 0;
        if (num == 1)
            return 1;
        if (num == 2)
            return 1;
        return fib(num - 1) + fib(num - 2);
    }
};
