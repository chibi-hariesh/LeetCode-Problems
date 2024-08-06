//https://leetcode.com/problems/minimum-number-of-pushes-to-type-word-ii/description/

class Solution {
public:
    int minimumPushes(string word) {
        cin.tie(0);
        cout.tie(0);
        ios::sync_with_stdio(false);
        vector<int> frequency(26, 0);
        for (char& c : word) {
            ++frequency[c - 'a'];
        }
        sort(frequency.rbegin(), frequency.rend());
        int totalPushes = 0;
        for (int i = 0; i < 26; ++i) {
            if (frequency[i] == 0) break;
            totalPushes += (i / 8 + 1) * frequency[i];
        }
        return totalPushes;
    }
};
