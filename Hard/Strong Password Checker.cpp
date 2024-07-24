//https://leetcode.com/problems/strong-password-checker/

class Solution {
public:
    int strongPasswordChecker(string password) {
        int n = password.length();
        bool hasLower = false, hasUpper = false, hasDigit = false;

        for (char c : password) {
            if (islower(c)) hasLower = true;
            if (isupper(c)) hasUpper = true;
            if (isdigit(c)) hasDigit = true;
        }

        int missingTypes = !hasLower + !hasUpper + !hasDigit;

        if (n < 6) {
            return max(missingTypes, 6 - n);
        } else if (n <= 20) {
            int replace = 0, one = 0, two = 0;
            for (int i = 2; i < n;) {
                if (password[i] == password[i-1] && password[i-1] == password[i-2]) {
                    int len = 2;
                    while (i < n && password[i] == password[i-1]) {
                        ++len;
                        ++i;
                    }
                    replace += len / 3;
                    if (len % 3 == 0) ++one;
                    else if (len % 3 == 1) ++two;
                } else {
                    ++i;
                }
            }
            return max(missingTypes, replace);
        } else {
            int replace = 0, one = 0, two = 0;
            for (int i = 2; i < n;) {
                if (password[i] == password[i-1] && password[i-1] == password[i-2]) {
                    int len = 2;
                    while (i < n && password[i] == password[i-1]) {
                        ++len;
                        ++i;
                    }
                    replace += len / 3;
                    if (len % 3 == 0) ++one;
                    else if (len % 3 == 1) ++two;
                } else {
                    ++i;
                }
            }
            
            int deleteCount = n - 20;
            replace -= min(deleteCount, one * 1) / 1;
            replace -= min(max(deleteCount - one, 0), two * 2) / 2;
            replace -= max(deleteCount - one - 2 * two, 0) / 3;
            return deleteCount + max(missingTypes, replace);
        }
    }
};
