class Solution {
public:
    vector<int> prefixMax(vector<int>arr){
        int n = arr.size();
        vector<int> ans(n);
        ans[0] = arr[0];
        for(int i=1;i<n;i++){
            ans[i] = max(ans[i-1], arr[i]);
        }
        return ans;
    }
    vector<int> suffixMax(vector<int>arr){
        int n = arr.size();
        vector<int> ans(n);
        ans[n-1] = arr[n-1];
        for(int i=n-2;i>=0;i--){
            ans[i] = max(ans[i+1], arr[i]);
        }
        return ans;
    }
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> Lmax = prefixMax(height);
        vector<int> Rmax = suffixMax(height);
        int total = 0;
        for(int i=0;i<n;i++ ){
            total += min(Lmax[i],Rmax[i]) - height[i];
        }
return total;
    }
};