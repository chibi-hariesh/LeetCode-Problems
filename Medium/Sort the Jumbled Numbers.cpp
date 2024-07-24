//https://leetcode.com/problems/sort-the-jumbled-numbers/?envType=daily-question&envId=2024-07-24
//Solution 1:
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

//Solution 2:
class Solution {
public:
    int digitTaker(int num, int place) {
        if (num == 0) return 0; // Handling the case where num is zero

        int len = log10(num) + 1;
        num = num / static_cast<int>(pow(10, len - place));
        return num % 10;
    }

    vector<int> intToArray(int num) {
        vector<int> digits;

        // Special case for 0
        if (num == 0) {
            digits.push_back(0);
            return digits;
        }

        int len = log10(num) + 1;
        for (int place = 1; place <= len; place++) {
            digits.push_back(digitTaker(num, place));
        }
        return digits;
    }

    int arrayToInteger(const vector<int>& nums) {
        int result = 0;
        int multiplier = 1;
        for (int i = nums.size() - 1; i >= 0; i--) {
            result += nums[i] * multiplier;
            multiplier *= 10;
        }
        return result;
    }

    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        vector<pair<int, int>> mappedValues;

        for (int num : nums) {
            vector<int> arr1 = intToArray(num);
            for (int& digit : arr1) {
                digit = mapping[digit];
            }
            int mappedInt = arrayToInteger(arr1);
            mappedValues.emplace_back(mappedInt, num);
        }

        stable_sort(mappedValues.begin(), mappedValues.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            return a.first < b.first;
        });

        vector<int> result;
        for (const auto& pair : mappedValues) {
            result.push_back(pair.second);
        }

        return result;
    }
};
