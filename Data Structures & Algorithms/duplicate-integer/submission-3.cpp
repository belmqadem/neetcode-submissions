class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> seen;

        for (int num : nums) {
            if (seen.insert(num).second == false)
                return true;
        }

        return false;
    }
};

// unordered_set in c++ lets you check whether you've seen a number before.
// unordered_set::insert() returns a pair
// .first --> iterator to the element.
// .second --> success or failure of the insertion 