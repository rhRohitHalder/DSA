class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
  // priority_queue<long, vector<long>, greater<long>> pq(nums.begin(), nums.end());
     priority_queue<long, vector<long>, greater<long>> pq(nums.begin(), nums.end());
        int count =0;
        while(pq.top() < k){
            long min1 = pq.top();
            pq.pop();
            long min2 = pq.top();
            pq.pop();

            pq.push(min1*2 + min2 );
            count++;
        }
        return count;
    }
};