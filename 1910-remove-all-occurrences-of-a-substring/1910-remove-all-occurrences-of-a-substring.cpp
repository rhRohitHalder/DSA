class Solution {
public:
    bool check (stack<char>& st , string& part , int n){
        stack<char> temp = st ; // dulicate stack
        for(int j=n-1;j>=0;j--){
            if(temp.top() != part[j]) return false;
            temp.pop();
        }
        return true;
    }
    string removeOccurrences(string s, string part) {
        string str;
        stack<char> st;
        int n1 = s.length();
        int n2 = part.length();
        for(int i=0;i< n1 ;i++){
           st.push(s[i]);
           if(st.size() >= n2 && check(st , part , n2) == true ){
            for(int j = 0;j<n2;j++){
                st.pop();
            }
           }
        }
    while(!st.empty()){
        str += st.top();
        st.pop();
    }
    str = string(str.rbegin(), str.rend());
    return str;
    }
};