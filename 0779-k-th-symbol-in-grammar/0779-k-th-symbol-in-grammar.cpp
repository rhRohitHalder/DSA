class Solution {
public:
   
    int kthGrammar(int n, int k) {
        int cur = 0;// if n=1 cur = 0
        int L = 1;
        int R = pow(2,n-1);
        for(int i=1;i<n;i++)
        {
           int mid  = (L+R)/2;
           if(k <= mid ){
            R = mid ;
           }else{
            L = mid + 1 ; 
            if(cur==0) cur=1;
            else cur = 0 ;
           }
        }
        return cur;
    }
};