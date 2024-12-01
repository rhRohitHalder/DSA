#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<long long> st;
        // lambda 
        unordered_map<string , function<int (int , int) >> mp =
        {
            {"+" , [](int a , int b) {return a+b ;}},
            {"-" , [](int a , int b) {return a-b ;}},
            {"*" , [](int a , int b) {return (long)a*(long)b ;}},
            {"/" , [](int a , int b) {return a/b ;}}
        };
        for ( string& token : tokens) {
            if(token =="+" || token =="-" || token =="*" || token =="/"){
                long long op1 = st.top();
                st.pop();
                long long op2 = st.top(); 
                st.pop();
        
                int result = mp[token](op2,op1);
                st.push(result);
            }
            else {
                 st.push(stoi(token));
            }
        }
        return st.top(); // The result is the last element on the stack
    }
};
