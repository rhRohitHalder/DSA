class Solution {
public:
    string removeKdigits(string num, int k) {
        if(num.length() == k) return "0";  // Edge case: Remove all digits
        
        stack<char> st;
        for(char digit : num) {
            while(!st.empty() && k > 0 && st.top() > digit) {
                st.pop();  // Remove larger elements to form a smaller number
                k--;
            }
            st.push(digit);
        }
        
        // Remove remaining k digits if needed
        while(k > 0 && !st.empty()) {
            st.pop();
            k--;
        }

        // Build the final result
        string result;
        while(!st.empty()) {
            result += st.top();
            st.pop();
        }
        reverse(result.begin(), result.end());

        // Remove leading zeros
        int i = 0;
        while(i < result.length() && result[i] == '0') i++;
        result = result.substr(i);

        return result.empty() ? "0" : result;
    }
};