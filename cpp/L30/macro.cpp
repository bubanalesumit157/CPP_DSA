#include<iostream>
#define PI 3.14   // object like macro-simple ones

// chain macro
#define INSTAGRAM FOLLOWERS
#define FOLLOWERS 157

// multi line macro
#define ELE 1, \
            2, \
            3, \
            4

// function like macro
#define min(a,b) (((a)<(b))? (a):(b))

#define  AREA(r)  (PI*(r)*(r))

using namespace std;

int main()
{
    double area=PI*2*2;
    cout<<area<<endl<<endl;

    cout << "Geeks for Geeks have "<< INSTAGRAM << "K followers on Instagram!";
    cout<<endl<<endl;
    
    int arr[] = { ELE };
 
    // Print elements
    printf("Elements of Array are:\n");
 
    for (int i = 0; i < 4; i++) {
        cout << arr[i] << ' ';
    }
    cout<<endl<<endl;

    int a = 18;
    int b = 76;
 
    cout << "Minimum value between"<< a << " and " << b << " is: " << min(a, b);
    cout<<endl<<endl;
    float r = 7;    // radius of circle
       
    cout<<"Area of Circle with radius " << r <<": "<< AREA(r);
   
    return 0;
}