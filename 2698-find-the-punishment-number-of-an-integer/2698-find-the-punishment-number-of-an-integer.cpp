class Solution {
public:
    bool check(int sq , int num , int currSum){
        if(sq == 0){
            return currSum == num;
        }
        return (check(sq/10, num ,sq%10 + currSum) || 
               check(sq/100, num ,sq%100 + currSum) || 
                check(sq/1000, num ,sq%1000 + currSum));
    }
    int punishmentNumber(int n) {
        int ans =0;
        for(int num = 1; num <= n ; num++){
            int sq = num * num;
            if(check(sq,num,0) == true){
                ans += sq;
            }
        }
        return ans;
    }
};