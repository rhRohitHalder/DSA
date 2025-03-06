class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size() ;// col size;
        int size = n*n;
        unordered_map<int,int> mp;
        int a = -1, b=-1;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                mp[grid[i][j]]++;
            }
        }
        for(int num=1;num<=size;num++){
            if(!mp.count(num)){
               a = num;
            }
            else if(mp[num] == 2){
                b = num;
            }
            if(a != -1 && b != -1) {break;}
        }
    return {b,a};
    }
};