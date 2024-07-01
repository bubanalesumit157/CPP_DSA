#include<iostream>
using namespace std;

void quick_sort(int arr[],int s,int e){
    int index=s;
    if(s>=e){
        return;
    }
    else{
        
        for(int i=s;i<=e;i++){
            if(arr[s]>arr[i]){
                index++;

            }
        }
        swap(arr[index],arr[s]);
        for(int i=s;i<index;i++){
            if(arr[i]>arr[index]){
                int g;
                for(int j=index+1;j<=e;j++){
                    if(arr[j]<arr[index]){
                        g=j;
                        break;
                    }
                }
                swap(arr[i],arr[g]);
            }
        }
    }
    quick_sort(arr,s,index-1);
    quick_sort(arr,index+1,e);


    
}
int main()
{
    int arr[4]={1,6,4,5};
    quick_sort(arr,0,3);
    for(auto i:arr){
        cout<<i<<" ";
    }
    return 0;
}