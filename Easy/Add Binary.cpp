//https://leetcode.com/problems/add-binary/

class Solution {
 public:
  string addBinary(string a, string b) {
    string result = "";
    int carry = 0;
    int i = a.length() - 1;
    int j = b.length() - 1;

    while (i >= 0 || j >= 0 || carry == 1) {
        if (i >= 0) {
            carry += a[i] - '0';
            i--;
        }
        if (j >= 0) {
            carry += b[j] - '0';
            j--;
        }
        result = char(carry % 2 + '0') + result;
        carry /= 2;
    }
    return result;
}
};