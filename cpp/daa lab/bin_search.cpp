#include<iostream>
#include<ctime>
using namespace std;
int bs_itr(int arr[],int s,int e,int key){
    srand(time(NULL));
    while(s<=e){
        int mid=rand()%(e-s+1)+s;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
}
int bs_rec(int arr[],int s,int e,int key){
    if(s>e){
        return -1;
    }
    srand(time(NULL));
    
    int mid=rand()%(e-s+1)+s;
    if(arr[mid]==key){
        return mid;
    }
    else if(arr[mid]>key){
        return bs_rec(arr,s,mid-1,key);
    }
    else{
        return bs_rec(arr,mid+1,e,key);
    }
}
int main()
{
    int n = 1001;
    int e=1000;
    int s=1;
    int key=922;
    int arr[1001];
    for(int i=0;i<n;i++){
        
        arr[i]=i;
    }
    clock_t start =clock();
    int pos=bs_itr(arr,s,e,key);
    if(pos==-1){
        cout<<"no";
    }
    else{
        cout<<"pos = "<<pos<<endl;
    }
    clock_t end=clock();
    cout<<endl<<"time = "<<(double)(end-start)/CLOCKS_PER_SEC;

    return 0;
}