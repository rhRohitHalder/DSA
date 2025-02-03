class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int incCnt = 1, decCnt = 1, maxLen = 1;
        
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > nums[i - 1]) {
                incCnt++;
                decCnt = 1; 
            } else if (nums[i] < nums[i - 1]) {
                decCnt++;
                incCnt = 1; 
            } else {
                incCnt = 1;
                decCnt = 1;
            }
            maxLen = max(maxLen, max(incCnt, decCnt));
        }
        
        return maxLen;
    }
};