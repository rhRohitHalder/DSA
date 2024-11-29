class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
         int n = temp.size();
    vector<int> ans;  
    for (int i = 0; i < n; i++) {
        int count = 0;
        bool found = false;  
        for (int j = i + 1; j < n; j++) {  // Increment `j`
            count++;
            if (temp[i] < temp[j]) {
                ans.push_back(count);
                found = true;
                break;  // Break out of inner loop when a warmer day is found
            }
        }
        if (!found) {
            ans.push_back(0);  // No warmer day found
        }
    }
    return ans;
    }
};