// https://leetcode.com/problems/happy-number/?envType=study-plan-v2&envId=top-interview-150

class Solution {
public:
    bool isHappy(int n) {
        unordered_map<int, int> umap;
        int num = n;
        while(true){
            num = sumOfsquares(num);
            umap[num]++;
            if(umap.at(num) > 1){
                return false;
            }
            if(num == 1 ){
                return true;
            }
        }
        return true;
    }

    int sumOfsquares (int num){
        int res = 0;
        while(num > 0){
            int rem = num%10;
            res = res + (rem*rem);
            num = num / 10;
        }
        return res;
    }
};
