class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans(nums.size() , 0);
        int pos=0, negi=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                ans[pos] = nums[i];
                pos+=2;
            }
            if(nums[i] < 0){
                ans[negi] = nums[i];
                negi+=2;
            }
        }
        return ans;
    }
};