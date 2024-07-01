#include<iostream>
#include<vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int r=matrix.size();
        int col=matrix[0].size();
        int startrow=0;
        int endrow=r-1;
        int startcol=0;
        int endcol=col-1;
        int c=0;
        int n=r*col;
        vector<int> v;
        while(c<n){
            for(int i=startcol;i<=endcol && c<n;i++){
                v.push_back(matrix[startrow][i]);
                c++;
            }
            startrow++;

            for(int i=startrow;i<=endrow && c<n;i++){
                v.push_back(matrix[i][endcol]);
                c++;
            }
            endcol--;

            for(int i=endcol;i>=startcol && c<n;i--){
                v.push_back(matrix[endrow][i]);
                c++;
            }
            endrow--;

            for(int i=endrow;i>=startrow && c<n;i--){
                v.push_back(matrix[i][startcol]);
                c++;
            }
            startcol++;
        }
        return v;
    }
int main()
{
    vector<vector<int>> arr={{0,1,2,3},{4,5,6,7},{8,9,10,11}};
    vector<int> a;
    a=spiralOrder(arr);
    for(int i:a){
        cout<<i<<" ";
    }
    
    return 0;
}