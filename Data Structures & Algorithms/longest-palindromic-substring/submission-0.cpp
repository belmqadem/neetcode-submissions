class Solution {
public:
    bool isPalindrome(int i, int j, string& s) {
        while (i < j) {
            if (s[i] == s[j]) {
                i++;
                j--;
            }
            else
                return false;
        }
        return true;
    }

    string longestPalindrome(string s) {
        int maxLen = 0;
        string longest = "";
        for (int i = 0; i < s.size(); i++) {
            for (int j = i; j < s.size(); j++) {
                if (isPalindrome(i, j, s)) {
                    int len = j - i + 1;
                    if (len > maxLen) {
                        maxLen = len;
                        longest = s.substr(i, len);
                    }
                }
            }
        }
        return longest;
    }
};
