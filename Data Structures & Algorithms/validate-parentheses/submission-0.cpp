class Solution {
public:
    bool isValid(string s) {
        stack<char> stash;

        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                stash.push(c);
            } else {
                if (stash.empty()) return false;
                if (c == ')' && stash.top() != '(') return false;
                if (c == '}' && stash.top() != '{') return false;
                if (c == ']' && stash.top() != '[') return false;
                stash.pop();
            }
        }
        return stash.empty();
    }
};
