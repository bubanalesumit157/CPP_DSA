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
    bool checkInclusion(string s1, string s2) {
        int arr1[26]={0};
        int arr2[26]={0};
        for(int i=0;i<s1.length();i++){
            int a=s1[i]-'a';
            arr1[a]++;
        }

        int ws=s1.length();
        // int n=s2.length();
        int i=0;

        while(i<ws && i<s2.length()){
            int a=s2[i]-'a';
            arr2[i]++;
            i++;
        }

        if(check(arr1,arr2)){
            return true;
        }

        while(i<s2.length()){
            char ch=s2[i];
            int a=ch -'a';
            arr2[a]++;

            char old=s2[i-ws];
            int oldindex=old-'a';
            arr2[oldindex]--;
            if(check(arr1,arr2)){
                return true;
            }
            i++;
        }
        return false;
    }
    
int main()
{
    string s1="ab",s2="eidboaoo";
    cout<<checkInclusion( s1,  s2);

    
}