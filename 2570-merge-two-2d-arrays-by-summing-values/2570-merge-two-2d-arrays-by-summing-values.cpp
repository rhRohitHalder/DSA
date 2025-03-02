class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& v, vector<vector<int>>& a) {
        //int n = nums1[0].size(); // row size()
        int n = v.size(); // col size()
        int m = a.size();
// BRUTE FORCE
        map<int,int> mp;
        vector<vector<int>> res;
        for (int i = 0; i < v.size(); i++) {
            int id = v[i][0];
            int val = v[i][1];
            mp[id] += val;
        }
        for (int i = 0; i < a.size(); i++) {
            int id = a[i][0];
            int val = a[i][1];
            mp[id] += val;
        }
        for(auto &it : mp){
            int key = it.first;
            int val = it.second;
            res.push_back({key,val});
        }
        //sort(begin(res),end(res));
        return res;
// OPTIMAL 

    }
};