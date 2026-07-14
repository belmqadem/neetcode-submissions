class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size())
            return false;

        unordered_map<char, int> char_set;

        for (char c : s) {
            char_set[c] += 1;
        }

        for (char c : t) {
            char_set[c]--;
            if (char_set[c] < 0)
                return false;
        }
        return true;
    }
};
