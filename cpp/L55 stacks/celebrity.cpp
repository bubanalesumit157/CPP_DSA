#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int celebrity(vector<vector<int> >& M, int n) 
{
    int ans=-1;
    int count=0;
    for(int i=0;i<n;i++){
        int flag=0;
        int c=1;
        for(int j=0;j<n;j++){
            if(M[i][j]==1){
                flag=1;
            }
            if(M[j][i]==1){
                c++;
            }
        } 
        if(flag==0 && c==n){
            ans=i;
            count++; 
        } 
    }
    if(ans!=0 && count ==1){
        return ans;
    }
    return -1;
}
int main()
{
    vector<vector<int>> v{{0,0,0,1,0},{1,0,0,1,0},{0,0,0,1,0},{0,0,0,0,0},{0,0,0,1,0}};
    int a=celebrity(v,5);
    cout<<a<<endl;
    
    return 0;
}

//  0 0 0 1 0
//  1 0 0 1 0 
//  1 0 0 1 0 
//  0 0 0 0 0 
//  0 0 0 1 0