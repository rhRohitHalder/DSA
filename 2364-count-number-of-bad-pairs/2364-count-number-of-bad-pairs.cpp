class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        long long ans = 0;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(nums[i]-i != nums[j]-j) ans++;
            }
        }
        return ans/2;
    }
};

// i j


// i==j 

// i<j -----> (j-i != a[j] - a[i])

// i>j 