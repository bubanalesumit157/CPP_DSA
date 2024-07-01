#include<iostream>
using namespace std;

bool check(int arr1[],int arr2[]){
    for(int i=0;i<26;i++){
        if(arr1[i]!=arr2[i]){
            return false;
        }
    }
    return true;
}
int main()
{
    string s1="ab",s2="eidboaoo";
    int arr1[26]={0};
    // char count arr
    for(int i=0;i<s1.length();i++){
        int a=s1[i]-'a';
        arr1[a]++;
    }
    
    // traverse s2 str in window of size s1 length n compare
    int n=s2.length();

    int windowsize=s1.length();
    int i=0;
    int arr2[26]={0};
    while(i<windowsize){
        int a=s2[i]-'a';
        arr2[a]++;
        i++;
    }
    if(check(arr1,arr2)){
            cout<<"t"<<endl;
    }
    while(i<n){
        char ch=s2[i];
        int a=ch-'a';
        arr2[a]++;

        int chdelt=s2[i-windowsize]-'a';
        arr2[chdelt]--;
        if(check(arr1,arr2)){
            cout<<"t"<<i<<endl;
        }
        i++;
    }
    return 0;
}