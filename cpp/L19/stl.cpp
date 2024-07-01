#include<iostream>
#include<array>

using namespace std;

int main()
{
    array<int,3> arr={2,3,4};
    for (int i = 0; i < 3; i++)
    {
        /* code */
        cout<<arr[i]<<" ";
    }
    cout<<endl<<arr.at(1)<<endl<<arr.front()<<endl<<arr.back()<<endl<<arr.empty()<<endl<<arr.size();
    
    return 0;
}