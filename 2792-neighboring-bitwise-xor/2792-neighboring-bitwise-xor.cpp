class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
       int x = 0;
       for(int a : derived){
        x = x^a;
       }
       return x==0;
    }
};