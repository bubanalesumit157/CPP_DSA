#include<iostream>
using namespace std;

int partition(int arr[],int s,int e){
    int index=s;
    for(int i=s;i<=e;i++){
        if(arr[s]>arr[i]){
            index++;

        }
    }
    swap(arr[index],arr[s]);

    int i=s,j=e;
    while(i<index && j>index){
        while(arr[i]<arr[index]){
            i++;
        }
        while(arr[j]>arr[index]){
            j--;
        }
        swap(arr[i++],arr[j--]);
    }
    return index;
}
void quick_sort(int arr[],int s,int e){
    
    if(s>=e){
        return;
    }
    int index= partition(arr,s,e);

    quick_sort(arr,s,index-1);
    quick_sort(arr,index+1,e);

}
int main()
{
    int arr[10]={1,6,4,5,5,6,7,38,7,99};
    quick_sort(arr,0,9);
    for(auto i:arr){
        cout<<i<<" ";
    }
    return 0;
}