class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];

            // complement found -> return its index and current index
            if (mp.find(complement) != mp.end()) {
                return {mp[complement], i};
            }

            // complement not found -> save the current integer nd its index in the map
            mp[nums[i]] = i;

        }

        return {};
    }
};
