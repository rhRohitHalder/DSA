class Solution {
public:
    vector<int> suffMax(vector<int> &arr){
        int n = arr.size();
        vector<int> ans(n);
        ans[n-1] = arr[n-1];
        for(int i=n-2;i>=0;--i){
           ans[i] = max(ans[i+1] , arr[i]);
        }
        return ans;
    }
    vector<int> prefMax(vector<int> &arr){
        int n = arr.size();
        vector<int> ans(n);
        ans[0] = arr[0];
        for(int i=1 ;i < n ;i++){
           ans[i] = max(ans[i-1] , arr[i]);
        }
        return ans;
    }
    int trap(vector<int>& height) {
        int n = height.size();
        if(n==0) return 0;

        vector<int> suffix_Max = suffMax(height);
        vector<int> prefix_Max = prefMax(height);
        int total = 0;
        for(int i=0;i<n;i++)
        {
            if((suffix_Max[i] > height[i]) && (prefix_Max[i] > height[i])){
                total += min(suffix_Max[i] , prefix_Max[i]) - height[i];
            }
        }
        return total;
    }
};