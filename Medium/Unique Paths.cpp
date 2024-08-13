//https://leetcode.com/problems/unique-paths/description/

//solution 1:
class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<int>dp(n,1);
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                dp[j] = dp[j] + dp[j-1];
            }
        }
        return dp[n-1];
    }
};

//solution 2: (Time limit exceeded)
class Solution {
public:
    int uniquePaths(int m, int n) {
        if(m == 1 || n == 1) return 1;
        else return (uniquePaths(m,n-1) + uniquePaths(m-1,n));
    }
};
