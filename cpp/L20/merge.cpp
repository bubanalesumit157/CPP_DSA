#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int s=m+n;
    for(int i=m,j=0;i<s;i++,j++){
        nums1[i]=nums2[j];
    }
        
}
int main()
{
    vector<int> nums1={1,2,3,0,0,0};
    vector<int> nums2={1,2,3};
    merge(nums1,3,nums2,3);
    for(auto i:nums1){
        cout<<i<<" ";
    }
    return 0;
}