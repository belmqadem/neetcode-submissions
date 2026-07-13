class Solution {
public:
    int recursive_search(vector<int>& nums, int i, int j, int target) {
        if (j >= i) {
            int mid = (j + i) / 2;
            if (nums[mid] == target)
                return mid;
            else if (nums[mid] > target)
                return recursive_search(nums, i, j - 1, target);
            else
                return recursive_search(nums, i + 1, j, target);
        }
        return -1;
    }

    int search(vector<int>& nums, int target) {
        return recursive_search(nums, 0, nums.size() - 1, target);
    }
};
