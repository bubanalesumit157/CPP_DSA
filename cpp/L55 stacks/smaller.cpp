#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    // Write your code here.
    vector<int> ans;
    int i=0;
    int j=1;
    while(i<n-1){
        int flag=0;
        j=i+1;
        while(j<n){
            if(arr[i]>arr[j]){
                ans.push_back(arr[j]);
                flag=1;
                break;
            }
            j++;
        }
        if(flag==0){
            ans.push_back(-1);
        }
        i++;
    }
    ans.push_back(-1);
    return ans;
}
vector<int> small(vector<int> v,int n){
    stack<int> s;
    s.push(-1);
    v.pop_back();
    int i=n-2;
    while(i>=0){
        if(v[i]>s.top() &&  v[i]>){
        i--;
        }
    }
}
int main()
{
    vector<int> v{2,4,7,3,1};
    vector<int> ans=nextSmallerElement(v,5);
    for(auto i:ans){
        cout<<i<<" ";
    }
    return 0;
}