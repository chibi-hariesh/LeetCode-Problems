//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/?envType=study-plan-v2&envId=top-interview-150


solution 1:

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice = prices[0];
        int profit = 0;

        for(int i=1;i<prices.size();i++){
            profit = max(profit,prices[i]-minprice);
            minprice = min(prices[i],minprice);
        }

        return profit;
    }
};

solution 2:

int init = [] {
	cin.tie(nullptr)->sync_with_stdio(false);
    freopen("user.out", "w", stdout);

    for (string s; getline(cin, s);) {
        int solution = 0, minPrice = INT_MAX;
        for (int _i = 1, _n = s.length(); _i < _n; ++_i) {
            int price = s[_i++] & 15;
            while ((s[_i] & 15) < 10) price = price * 10 + (s[_i++] & 15);
            minPrice = min(minPrice, price);
            solution = max(solution, price - minPrice);
        }
cout << solution << '\n';    }
    return 0;
}();

class Solution {
public:
    int maxProfit(vector<int>& arr) {
        return 0;
    }
};