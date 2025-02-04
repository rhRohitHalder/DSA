class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        stack<int> st;
        vector<int> ans;
        unordered_map<int,int> m;
        for(int i=0;i<n2;i++){
            int ele = nums2[i];
            while(!st.empty() && ele > st.top()){
                m[st.top()] = ele;
                st.pop();
            }
            st.push(ele);
        }
        for(int num : nums1) ans.push_back(m.count(num) ? m[num] : -1);
        return ans;
    }
};