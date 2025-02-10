class Solution {
public:
    string clearDigits(string s) {
        string ans="";
        stack<char> st;
        for(int i=0;i<s.length();i++ ){
            if(!st.empty() && isdigit(s[i])){
               st.pop();
               continue;
            }
            else{
             st.push(s[i]);
            }
        }
        while(!st.empty()){
            ans = ans + st.top();
            st.pop();
        }
     ans = string(ans.rbegin(), ans.rend());
        return ans;
    }
};