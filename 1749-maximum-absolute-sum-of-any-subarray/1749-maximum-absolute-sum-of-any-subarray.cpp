class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
       int n = nums.size();
       int CurMax = 0;
       int CurMin = 0;
       int max_sum = INT_MIN, min_sum = INT_MAX;
        int sum = 0;
        for(int i=0; i<n ; i++){
            CurMax = max(CurMax + nums[i] , nums[i]);
            CurMin = min(CurMin + nums[i] , nums[i]);
            
            max_sum = max(max_sum , CurMax);
            min_sum = min(min_sum , CurMin);

        }
        return (max(abs(max_sum) , abs( min_sum)));
    }
};
