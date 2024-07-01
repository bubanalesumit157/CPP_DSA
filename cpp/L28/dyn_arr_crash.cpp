#include<iostream>
using namespace std;

int main()
{
    // this is static allocation .
    // while(1){
    //     int p=5;   // a new int is created in  stack everytime. and erased after loop ends.
    // }
    

    // this is dynamic allocation.
    while(1){
        int *arr= new int[4];   // here a new memory is being taken up everytime loop repeats. and later the program crashes when storage in heap ends.
    }
    return 0;
}