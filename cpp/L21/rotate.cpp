#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> nums={3,4,6,7};
    int n=nums.size();
    int k=2;
    for(int i=0;i<k;i++){
        int t=nums[n-1];
        for(int j=1;j<n;j++){
            nums[n-j]=nums[n-j-1];
        }
        nums[0]=t;
    }
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}