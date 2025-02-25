class Solution {
public:
    // int subArraySum(vector<int>& arr){
    //     int cont = 0;
    //     int mod = (1e9 + 7);
    //     for(int i=0;i<arr.size();i++){
    //         int cnt = 0;
    //         for(int j=i;j<arr.size();j++){
    //             cnt = cnt + arr[j];
    //             if(cnt % 2 != 0 ) cont++;
    //         }
    //     }
    //     return cont % mod;
    // }
    int subArraySum(vector<int>& arr){
 int mod = 1e9 + 7;
        int prefixSum = 0; // Current prefix sum
        int evenCount = 1; // Number of even prefix sums (prefixSum[0] = 0 is even)
        int oddCount = 0;  // Number of odd prefix sums
        int result = 0;    // Total number of subarrays with odd sum

        for (int num : arr) {
            prefixSum += num; // Update prefix sum
            if (prefixSum % 2 == 1) {
                // If prefixSum is odd, the number of valid subarrays is the number of even prefix sums
                result = (result + evenCount) % mod;
                oddCount++; // Increment odd prefix sum count
            } else {
                // If prefixSum is even, the number of valid subarrays is the number of odd prefix sums
                result = (result + oddCount) % mod;
                evenCount++; // Increment even prefix sum count
            }
        }
        return result;
    }
    int numOfSubarrays(vector<int>& arr) {
        int res = subArraySum(arr);
        return res;
    }
};