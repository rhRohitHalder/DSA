class Solution {
public:
    int maxScore(vector<int>& card, int k) {
        int n = card.size();
        int l = 0;
        int r = n-k;
        int sum = 0 , res = 0;
        // sum = sum of three elements from r = n-k to end 
        for(int i=r;i<n;i++) sum += card[i];
        res = sum ;

        while(r<n){
            sum += card[l]-card[r];
            res = max(res,sum);
            l++;
            r++;
        }
        return res;
    }
};