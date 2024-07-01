#include<iostream>
#include<vector>
using namespace std;
bool bs(vector<vector<int>> v,int n){
    int r=v.size();
    int c=v[0].size();
    
    for(int i=0;i<r;i++){
        int s=0;
        int e=c-1;
        int mid=s+(e-s)/2;
        while(s<=e){
            if(v[i][mid]==n){
                return 1;
            }
            else if(v[i][mid]<n){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
            mid=s+(e-s)/2;
        }
    }
    return false;
}

int main()
{
    vector<vector<int>> v={{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
    cout<<bs(v,4);
    return 0;
}