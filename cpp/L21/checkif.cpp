#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> nums={1,3,0,4};
    int n=nums.size();
    int c=0;
    for(int i=1;i<n;i++){
        if(nums[i-1]>nums[i]){
            c++;
        }
    }
    if(nums[n-1]>nums[0]){
        c++;
    }
    cout<<c;
    
    
    return 0;
}