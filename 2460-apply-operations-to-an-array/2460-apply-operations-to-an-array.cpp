class Solution {
public:
void SetZeros(vector<int>& nums) {
    int n = nums.size();
    int idx = 0; // Index to place non-zero elements

    // Move non-zero elements to the front
    for (int i = 0; i < n; i++) {
        if (nums[i] != 0) {
            nums[idx++] = nums[i];
        }
    }

    // Fill remaining positions with zeros
    while (idx < n) {
        nums[idx++] = 0;
    }
}
    vector<int> applyOperations(vector<int>& nums) {
        vector<int> ans = nums;
        int n = nums.size();
        for(int i=0;i<n-1;i++){
            if(ans[i] == ans[i+1]){
                ans[i] = ans[i]*2;
                ans[i+1] = 0;
                i++;
            }
        }
        SetZeros(ans);
        return ans;
    }
};