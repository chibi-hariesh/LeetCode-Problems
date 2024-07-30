//https://leetcode.com/problems/count-pairs-that-form-a-complete-day-i/description/
//Solution 1:
class Solution {
public:
    int countCompleteDayPairs(vector<int>& hours) {
        unordered_map<int, int> remainder_count;
        int count = 0;
        for (int hour : hours) {
            int remainder = hour % 24;
            if (remainder == 0) {
                count += remainder_count[0];
            } else {
                count += remainder_count[24 - remainder];
            }
            ++remainder_count[remainder];
        }
        return count;
    }
};

//Solution 2:

class Solution {
public:
    int countCompleteDayPairs(vector<int>& hours) {
        int count = 0;
        int n = hours.size();
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if ((hours[i] + hours[j]) % 24 == 0) {
                    ++count;
                }
            }
        }
        return count;
    }
};
