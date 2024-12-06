class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        int sum = 0 ;
        int count = 0 ;
        for(int i = 1;i<=n;i++){
            auto it = find(banned.begin(), banned.end(), i);
            if(it == banned.end()){ // not found
               if( sum + i <= maxSum){ 
                sum += i;
               count++;
                }
            }else{
                continue;
            }
        }
        return count;
    }
};