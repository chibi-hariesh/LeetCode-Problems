//https://leetcode.com/problems/sort-the-jumbled-numbers/?envType=daily-question&envId=2024-07-24

class Solution {
public:
    int mapNumber(int num, const vector<int>& mapping) {
        if (num == 0)
            return mapping[0];

        int mappedNum = 0;
        int multiplier = 1;

        while (num > 0) {
            int digit = num % 10;
            mappedNum += mapping[digit] * multiplier;
            num /= 10;
            multiplier *= 10;
        }

        return mappedNum;
    }

    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        vector<pair<int, int>> mappedValues;

        for (int num : nums) {
            int mappedInt = mapNumber(num, mapping);
            mappedValues.emplace_back(mappedInt, num);
        }

        stable_sort(mappedValues.begin(), mappedValues.end(),
                    [](const pair<int, int>& a, const pair<int, int>& b) {
                        return a.first < b.first;
                    });

        vector<int> result;
        for (const auto& pair : mappedValues) {
            result.push_back(pair.second);
        }

        return result;
    }
};
