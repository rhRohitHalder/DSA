class Solution {
public:
    string removeStars(string s) {
        string res;
        stack<int> st;
        for(auto &e :s){
            if(isalpha(e)){
               st.push(e);
            }else{
                st.pop();
            }
        }
        while(!st.empty()){
            res += st.top();
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};