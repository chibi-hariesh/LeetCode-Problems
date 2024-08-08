//https://leetcode.com/problems/reverse-words-in-a-string/description/?envType=study-plan-v2&envId=leetcode-75
class Solution {
public:
    string reverseWords(string s) {
        cin.tie(0);
        cout.tie(0);
        ios::sync_with_stdio(false);
        stringstream ss(s);
        string word;
        vector<string>arr;
        string ans;
        while(ss >> word){
            arr.push_back(word);
        }
        for(int i=arr.size()-1;i>=0;i--)
        {
            ans.append(arr[i]);
            if(i!=0)
            ans.append(" ");
        }
        return ans;
    }
};
