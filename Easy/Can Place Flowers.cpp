//https://leetcode.com/problems/can-place-flowers/description/?envType=study-plan-v2&envId=leetcode-75

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        cin.tie(0);
        cout.tie(0);
        ios::sync_with_stdio(false);
        int i = 0;
        while(i < flowerbed.size() && n > 0)
        {
            if(flowerbed[i] == 0)
            {
                bool left = (i==0) || flowerbed[i-1] == 0;
                bool right = (i==flowerbed.size()-1) || (flowerbed[i+1] == 0);
                if(left && right){
                    flowerbed[i] = 1;
                    n--;
                }
            }
            i++;
        }
        if(n==0) return true;
        return false;
    }
};
