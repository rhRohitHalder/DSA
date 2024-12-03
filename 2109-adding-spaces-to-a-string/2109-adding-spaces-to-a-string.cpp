class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string res = "";
        int j = 0, n = spaces.size();
        
        for (int i = 0; i < s.length(); ++i) {
            // Check if the current index matches a space index
            if (j < n && i == spaces[j]) {
                res += ' '; // Add a space
                ++j;        // Move to the next space index
            }
            res += s[i];    // Add the current character
        }
        return res;
    }
};
