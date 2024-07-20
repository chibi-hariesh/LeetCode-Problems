// https://leetcode.com/problems/contains-duplicate-ii/description/
// Solution 1:
class Solution {
public:
    bool containsNearbyDuplicate(std::vector<int>& nums, int k) {
        std::unordered_set<int> uset;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            if (uset.find(nums[i]) != uset.end()) {
                return true;
            }
            uset.insert(nums[i]);
            if (uset.size() > k) {
                uset.erase(nums[i - k]);
            }
        }
        return false;
    }
};

// Solution 2:

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> umap;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (umap.find(nums[i]) != umap.end()) {
                if ((i - umap[nums[i]]) <= k) {
                    return true;
                }
            }
            umap[nums[i]] = i;
        }
        return false;
    }
};
