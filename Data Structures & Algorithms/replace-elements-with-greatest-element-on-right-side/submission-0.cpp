class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int i = 0;

        for (i; i < arr.size(); i++) {
            int greatest = 0;

            for (int j = i + 1; j < arr.size(); j++) {
                greatest = max(greatest, arr[j]);
            }
            arr[i] = greatest;
        }
        
        arr[--i] = -1;
        return arr;
    }
};