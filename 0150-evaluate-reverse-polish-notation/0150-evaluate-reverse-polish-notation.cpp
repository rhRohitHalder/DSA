#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<long long> st;
        for (const string& token : tokens) {
            if (isdigit(token.back()) || (token.size() > 1 && token[0] == '-')) {
                st.push(stoi(token));
            } else {
                
                long long op1 = st.top();
                st.pop();
                long long op2 = st.top(); 
                st.pop();
                if (token == "+") 
                {
                    st.push(op2 + op1);
                } 
                else if (token == "-") 
                {
                    st.push(op2 - op1);
                } 
                else if (token == "*")
                {
                    st.push(op2 * op1);
                }
                 else if (token == "/") {
                    st.push(op2 / op1);
                }
            }
        }
        return st.top(); // The result is the last element on the stack
    }
};
