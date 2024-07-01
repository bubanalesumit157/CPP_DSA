#include<iostream>
#include<vector>
using namespace std;
void solve(vector<int>& nums,vector<int> output,int i,vector<vector<int>>& ans){
    if(i>=nums.size()){
        ans.push_back(output);
        return; 
    }
    // exclude
    solve(nums,output,i+1,ans);

    // include
    int element = nums[i];
    output.push_back(element);
    solve(nums,output,i+1,ans);
}
vector<vector<int>> Power_set(vector<int>& nums){
    vector<vector<int>> ans;
    vector<int> output;
    int i=0;
    solve(nums,output,i,ans);
    return ans;

}

int main()
{
    vector<int> arr={1,2,3,4};
    vector<vector<int>> ans=Power_set(arr);
    for(auto i=0;i<ans.size();i++){
        for(auto j=0;j<ans.size();j++){
            // cout<<arr[i][j]<<" ";
    }
    
    return 0;
}