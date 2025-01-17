class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int n = nums.size();
//************************better approach********************
        // unordered_map<int,int> mapp;
        // for(int i=0;i<n;i++)
        // {
        //     mapp[nums[i]]++;
        // }
        // for(auto it : mapp)
        // {
        //    if(it.second > n/2 )
        //    return it.first;
        // }
        // return -1;
//****************************Optimal approach************************
// MOORE'S voting algorithm 
int ele ;
int count = 0 ;
for(int i=0;i<n;i++)
{
    if(count == 0)
    {
        count = 1;
        ele = nums[i];
    }
    else if(ele==nums[i])  count++;
    else                    count--;
}
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(nums[i] == ele) cnt++;
    }
    if(cnt > (n/2)) return ele ;
// if don't find anything greater than n/2 
    return -1;
    } 

};