#include<iostream>
#include<vector>

#include<algorithm>
using namespace std;

int main()
{
    vector<char> a;
    a.push_back('A');
    a.push_back('B');
    a.push_back('b');
    a.push_back('a');
    int arr[26]={0};
    for(int i=0;i<4;i++){
        int j;
        if(a[i]>='a' && a[i]<='z'){
            j=a[i]-'a';
        }
        else if(a[i]>='A' && a[i]<='Z'){
            j=a[i]-'A';
        }
        arr[j]++;
        cout<<arr[j]<<endl;
    }
    // sort(arr.begin(),arr.end());
    for(int i:arr){
        cout<<i<<" ";
    }
    cout<<endl;
    int mi=0;
    int max=arr[0];
    for(int i=1;i<25;i++){
        if(max<arr[i]){
            mi=i;
            max=arr[i];
        }
        cout<<mi<<endl;
    }
    char ch=mi+'a';
    cout<<endl<<mi<<" "<<ch;
    return 0;
}