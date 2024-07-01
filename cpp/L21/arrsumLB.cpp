#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> a={1,2};
    vector<int> b={9,0,0};
    vector<int> ans;
    int carry=0;
    int i=a.size()-1;
    int j=b.size()-1;

    while(i>=0 && j>=0){
        // int v1=a[i];
        // int v2=b[j];
        int sum=a[i]+b[j]+carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
        i--;
        j--;
    }

    while(i>=0){
        int sum=a[i]+carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
        i--;
    }

    while(j>=0){
        int sum=b[j]+carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
        j--;
    }

    while(carry!=0){
        int sum=carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
    }


    int n=ans.size();
    for(int i=0;i<n;i++){
        cout<<ans[n-i-1]<<" ";
    }
    return 0;
}