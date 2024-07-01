#include<iostream>
#include<vector>
using namespace std;
bool bs(vector<vector<int>>& matrix,int mid,int s,int e,int t){
    // cout<<mid<<" "<<s<<" "<<e<<endl;
    int middle;
    while(s<=e){
        middle=(s+e)/2;
        cout<<middle<<" "<<s<<" "<<e<<endl;
        if(matrix[mid][middle]==t){
            return 1;
        }
        else if(matrix[mid][middle]>t){
            e=middle-1;
        }
        else{
            s=middle+1;
        }
        cout<<middle<<" "<<s<<" "<<e<<endl;
    }
    return 0;
}
bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int m=matrix.size()-1;
    int n=matrix[0].size()-1;
    int s=0;
    int e=m;
    int mid;
    // if(m==0){
    //     cout<<m<<endl;
    //     return bs(matrix,0,0,n,target);
    // }
    while(s<=e){
        mid=(s+e)/2;
        if(matrix[mid][0]<=target && matrix[mid][n]>=target){
            return bs(matrix,mid,0,n,target);
        }
        else if(matrix[mid][0]>target){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return 0;
}
int main()
{
    vector<vector<int>> v{{1,3,5}};
    int a=searchMatrix(v,1);
    cout<<a;
    return 0;
}