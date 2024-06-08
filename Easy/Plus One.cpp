https://leetcode.com/problems/plus-one/description/

class Solution {
public:
    vector<int> plusOne(vector<int>& arr) {

        for(int i=arr.size()-1;i>=0;i--)
        {
            if(arr[i]==9)
                arr[i] = 0;
            else
            {
                arr[i]++;
                return arr;
            }
        }
        arr[0]=1;
        arr.push_back(0);
        return arr;
    }
};

