class Solution {
public:
    bool check(vector<int>& nums) {
        int r =0;
        for( int i=1; i<nums.size() ; i++ )
        {
            if (nums[i-1] > nums[i]) r++;
        }
        if( nums[nums.size()-1] > nums[0] ) r++;
        return r <= 1 ;
    }
};