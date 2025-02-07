class Solution {
public:
   vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        unordered_map<int, int> map;
        unordered_map<int, int> color_counter;
        vector<int> result;
       for (auto query : queries) {
           auto ball = query[0];
           auto ball_color = query[1];
           if (map.contains(ball)) {
               int old_color = map[ball];
               color_counter[old_color]--;
               if (color_counter[old_color] == 0) {
                   color_counter.erase(old_color);
               }
           }
           map[ball] = ball_color;
           color_counter[ball_color]++;
           result.push_back(static_cast<int>(color_counter.size()));
       }
       return result;
   }
};