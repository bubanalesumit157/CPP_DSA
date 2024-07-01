#include<iostream>
#include<vector>

#include<algorithm>
using namespace std;

int main()
{
    vector<char> a;
    a.push_back('a');
    a.push_back('z');
    a.push_back('a');
    a.push_back('b');
    int arr[26]={0};
    for(int i=0;i<4;i++){
        int j=a[i]-'a';
        arr[j]++;
        cout<<arr[j]<<endl;
    }
    // sort(arr.begin(),arr.end());
    // for(int i:arr){
    //     cout<<i<<" ";
    // }
    cout<<endl;
    int mi=0;
    for(int i=0;i<25;i++){
        if(arr[i]>arr[i+1]){
            mi=i;
        }
    }
    cout<<arr[mi];
    return 0;
}