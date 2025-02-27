class Solution {
public:
    int lenLongestFibSubseq(vector<int>& arr) {
        unordered_map<int,int> mp;
        for(int i=0;i<arr.size();++i) mp[arr[i]] = i;
        int maxi = INT_MIN;
        for(int i=0;i<arr.size();i++){
            for(int j=i+1;j<arr.size();j++){
                int cnt = 2,num1 = arr[i],num2 = arr[j];
                while(mp.count(num1+num2)){
                    int sum = num1+num2;
                    num1 = num2;
                    num2 = sum;
                    cnt++;
                }
                maxi=max(maxi,cnt);
            }
        } 
        return(maxi>2) ? maxi : 0;
    }
};