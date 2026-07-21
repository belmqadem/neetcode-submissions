class KthLargest {
public:
    int k;
    vector<int> nums;
    priority_queue<int, vector<int>, greater<int>> pq;    
    
    KthLargest(int k, vector<int>& nums) {
        this->k = k;
        this->nums = nums;

        for (int num : nums)
        {
            this->pq.push(num);
            if (pq.size() > k)
                pq.pop();
        }
    }
    
    int add(int val) {
        this->pq.push(val);
        if (this->pq.size() > k)
            pq.pop();
        return this->pq.top();
    }
};
