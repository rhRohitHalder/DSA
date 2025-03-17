class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int n = nums.size();
        int cnt = n/2;
        unordered_map<int,int> mpp;
        for(int i=0;i<nums.size();i++){
              mpp[nums[i]]++;
            if(mpp[nums[i]] == 2){
                cnt--;
                mpp[nums[i]] = 0;
            }
        }
        return (cnt==0);
    }
};