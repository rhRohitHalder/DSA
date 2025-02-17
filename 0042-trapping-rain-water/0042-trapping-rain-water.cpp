class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int Lmax = height[0];
        int Rmax = height[n-1];
        int l = 1 , r = n-2;
        int total = 0 ;
        while(l<=r){
            if(Lmax <= Rmax){
                if(height[l] <= Lmax ){
                    total += (Lmax-height[l]);
                }else{
                    Lmax = height[l] ;
                }
                l++;
            } else{
                if(height[r] < Rmax ){
                    total += (Rmax-height[r]);
                }else{
                    Rmax = height[r] ;
                }
                r--;
            }
        }
        return total;
    }
};