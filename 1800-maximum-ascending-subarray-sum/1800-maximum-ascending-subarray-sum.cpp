class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        // int mS = INT_MIN;
        int n = nums.size();
        // int sum = 0 ;
        // for(int i=0 ;i < n ;i++){
        //     sum += nums[i];
        //     if(nums[i] < nums[i+1]) mS = max(mS , sum);
        //     else if(nums[i] > nums[i+1] && nums[i] < nums[i-1]) sum = 0;
        // }
        int sum = nums[0], mS = nums[0];
for (int i = 1; i < n; i++) {
    if (nums[i] > nums[i - 1]) {
        sum += nums[i];  // Continue current ascending sequence
    } else {
        mS = max(mS, sum); // Update max sum before resetting
        sum = nums[i];  // Start a new subarray sum
    }
}
mS = max(mS, sum); 
        return mS;
    }
};