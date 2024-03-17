#include<iostream>
#include<vector>
using namespace std;

class Solution {
private: 
    void solve(vector<int> nums,vector<vector<int>> &ans,int index){
        //base case
        if(index>=nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int j=index;j<nums.size();j++){
            swap(nums[index],nums[j]);
            solve(nums,ans,index+1);
            //backtracking to get the original value of nums
            swap(nums[index],nums[j]);

        }
    }

public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        solve(nums,ans,0);
        return ans;
        
    }
};