// class Solution {
// public:
//     int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
    //--------------------BRUTE FORCE--------------------------
//        int row = mat.size(); 
//        int col = mat[0].size();
//        unordered_map<int,pair<int,int>> mp;

//        // mapping
//        for(int i =0;i<row;i++){
//         for(int j=0;j<col;j++){
//             mp[mat[i][j]] = {i,j};
//         }
//        }
//        vector<int> row_cnt(row,0);
//        vector<int> col_cnt(col,0);
//        // now iterate the arr and mark the coloured ones 
//        //and check whether rowCount = col or colCount = row
//        for(int i=0 ; i<arr.size();i++)
//        {
//         int rowInd = mp[arr[i]].first;
//         int colInd = mp[arr[i]].second;

//         row_cnt[rowInd]++;
//         if(row_cnt[rowInd] == col) return i;
//         col_cnt[colInd]++;
//         if(col_cnt[colInd] == row) return i;
//        }
//        return -1;
//     }
// };
//----------------------------OPTIMAL SOLUTION-----------------------
//
class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
       int row = mat.size(); 
       int col = mat[0].size();
       /* by observation we can see 
       when we map the indexing of mat arr */
       unordered_map<int,int> mp;
       for(int i=0;i<arr.size();i++){
        mp[arr[i]]=i;
       }


       int minInd = INT_MAX;


       //check each row 
       for(int i=0; i < row ; i++){
        int lastInd = INT_MIN;
        for(int j=0;j<col;j++){
            int val = mat[i][j];
            int ind = mp[val];
            lastInd = max(lastInd , ind);
        }
        minInd = min(minInd , lastInd);
       }


       //check each col 
       for(int j=0;j<col;j++){
        int lastInd = INT_MIN;
        for(int i=0; i < row ; i++){
            int val = mat[i][j];
            int ind = mp[val];
            lastInd = max(lastInd , ind);
        }
        minInd = min(minInd , lastInd);
       }
       return minInd;
    }
};