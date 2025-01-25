class Solution {
public:
    vector<int> lexicographicallySmallestArray(vector<int>& nums, int limit) {
        for(int i=0;i<nums.size()-1;i++){
            int j = i+1;
            if(abs(nums[i] - nums[j]) <= limit) swap(nums[i],nums[j]);
        }
        return nums;
    }
};