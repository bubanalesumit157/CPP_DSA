#include<iostream>
#include<vector>
using namespace std;
int countprimes(int n) {
        int c=0;
        vector<bool> p(n,true);
        // p[0]=p[1]=false;
        for(int i=2;i<n;i++){
            if(p[i]){
                c++;
                for(int j=2*i;j<n;j=j+i){
                    p[j]=false;
                }
            }
        }
        return c;
    }
int main()
{
    int n=23;
    cout<<countprimes(n);
    
    return 0;
}