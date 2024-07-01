#include<iostream>
using namespace std;
void print(int* p){
    cout<<p<<" "<<*p<<endl;
}

void update(int *p){
    p=p+1;
    cout<<"inside fn "<<p<<endl;
}

void update1(int*p){
    // p=p+1;
    *p=*p+1;

}

int sum(int* arr,int n){
    int sum=0;
    arr[2]=9;
    cout<<"size of arr "<<sizeof(arr)<<endl;
    for(int i=0;i<n;i++){
        sum+=arr[i];

    }
    return sum;
}
int main()
{
    int n=5;
    int *p=&n;
    print(p);
    update1(p);
    update(p);
    print(p);

    int arr[5]={1,2,3,4,5};
    cout<<arr[2]<<endl;
    cout<<sum(arr,3)<<endl;
    cout<<arr[2];

    return 0;
}