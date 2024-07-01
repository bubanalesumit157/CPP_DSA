#include<iostream>
#include<vector>
using namespace std;
bool bs(vector<vector<int>> v,int k){
    int r=v.size();
    int c=v[0].size();
    int s=0;
    int e=r*c-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        int ele=v[mid/r][mid%r];
        cout<<ele<<" ";
        if(ele==k){
            return 1;
        }
        else if(ele>k){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return 0;
}
int main()
{
    vector<vector<int>> v={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    cout<<bs(v,11);
    return 0;
}