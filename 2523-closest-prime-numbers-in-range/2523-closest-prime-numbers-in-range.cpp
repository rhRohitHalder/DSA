class Solution {
public:
    vector<int>primeCheck(int n){
        vector<int> isPrime(n+1,true);
        isPrime[0] = false;
        isPrime[1] = false;
        for(int i = 2 ; i <= sqrt(n) ;i++){
            if(isPrime[i] == true){
                for(int j = 2; i*j <= n ; j++){
                    isPrime[j*i] = false;
                }
            }
        }
        return isPrime;
    }
    vector<int> closestPrimes(int left, int right) {
       vector<int> primes = primeCheck(right) ;
       vector<int> ans;
       for(int num  = left ; num <= right ;num++){
        if(primes[num]){
            ans.push_back(num);
        }
       }
       int minD = INT_MAX;
       vector<int> res = {-1,-1};
       for(int i=1 ;i<ans.size();i++){
        if(ans[i] - ans[i-1] < minD){
            minD = (ans[i] - ans[i-1]);
            res = {ans[i-1],ans[i]};
        }
       }
       return res;
    }
};