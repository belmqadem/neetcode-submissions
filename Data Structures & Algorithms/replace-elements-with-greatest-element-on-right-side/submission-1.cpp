class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        int greatestRight = -1;

        for (int i = n - 1; i  >= 0; i--) {
            int greatest = max(greatestRight, arr[i]);
            arr[i] = greatestRight;
            greatestRight = greatest;
        }
    
        return arr;
    }
};