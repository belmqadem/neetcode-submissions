class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        size_t size = std::size(nums);
        if (size == 0) return false;

        for (auto it = nums.begin(); it != nums.end() - 1; it++) {
            for (auto itt = it + 1; itt != nums.end(); itt++) {
                if (*it == *itt) {
                    return true;
                }
            }
        }

        return false;
    }
};