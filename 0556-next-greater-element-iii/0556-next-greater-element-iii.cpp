class Solution {
public:
    int nextGreaterElement(int n) {
        string sd = to_string(n);
        next_permutation(sd.begin(),sd.end());
        int x = stoll(sd);
        return (x > n) ? x : -1;
    }
};