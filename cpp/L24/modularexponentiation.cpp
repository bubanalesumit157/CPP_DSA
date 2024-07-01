#include<iostream>
using namespace std;
int modularExponentiation(int x, int n, int m) {
	// Write your code here.
	int res=1;
	while(n>0){
		if(n&1){
			// odd
			res=(1LL*(res)*(x)%m)%m;
		}
		x=(1LL*(x%m)*(x%m))%m;
		n=n>>1;

	}
	return res;
}
int main()
{
    
    cout<<modularExponentiation(2,3,2);
    return 0;
}