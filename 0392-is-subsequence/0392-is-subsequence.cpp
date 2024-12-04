class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n = s.size();
        int m = t.size();

        map<char , vector<int>> mp;
        for(int index =0;index<m;index++){
            mp[t[index]].push_back(index);
        }
        int prev = -1;
        for(int i=0 ; i<n ;i++){
            char c = s[i];
            if(mp.find(c) == mp.end()) return false;

            vector<int> ind = mp[c];
            // auto index = upper_bound(ind.begin() , ind.end() , prev) - ind.begin();
            auto index = upper_bound(ind.begin() , ind.end() , prev);
            if(index == ind.end()) return false;
            prev = *index;
        }
        return true;
    }
};