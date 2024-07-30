//https://leetcode.com/problems/climbing-stairs/description/

class Solution {
public:
    int fibonacciSum(int n) {
        if (n <= 0)
            return 0;
        if (n == 1)
            return 0;
        if (n == 2)
            return 1;

        int fib1 = 0, fib2 = 1;
        int sum = fib1 + fib2;

        for (int i = 3; i <= n; ++i) {
            int nextFib = fib1 + fib2;
            sum += nextFib;
            fib1 = fib2;
            fib2 = nextFib;
        }

        return sum;
    }
    int climbStairs(int n) { return fibonacciSum(n)+1; }
};
