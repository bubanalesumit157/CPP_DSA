#include<iostream>
#define M 1024
using namespace std;


typedef struct 
{
    int fact[M+1];
    int exp[M+1];
    int size;
} Factor;

void findfactors(int x,Factor* factor)
{
    int i,j=1;
    int n=x,c=0;
    int k=1;

    factor->fact[0]=1;
    factor->exp[0]=1;

    for(i=2;i<=n;i++){
        c=0;

        while(n%i == 0){
            c++;
            n=n/i;

        }

        if(c>0){
            factor->exp[k] = c;
            factor->fact[k]=i;
            k++;
        }
    }
    factor->size=k-1;
}

display_factors(int x,Factor factor){
    cout<<"prime factors of "<<x<<" are : ";
    for(int i=0;i<factor.size;i++){
        cout<<factor.fact[i];
        if(factor.size>1){
            cout<<"^"<<factor.exp[i];
        }
        if(i<factor.size){
            cout<<"*";
        }
        else{
            cout<<endl;
        }
    }
    cout<<endl;
}


int middle_school(int m,int n){
    Factor mfactor,nfactor;


    findfactors(m,&mfactor);
    display_factors(m,mfactor);

    findfactors(n,&nfactor);
    display_factors(n,nfactor);


    int min;
    int i=1;
    int j=1;
    int x=1;

    while(i<=mfactor.size && j<= nfactor.size){
        if(mfactor.fact[i] < nfactor.fact[j]){
            i++;
        }
        else if(nfactor.fact[j]<mfactor.fact[i]){
            j++;
        }
        else{
            min = mfactor.exp[i] > nfactor.exp[j] ? nfactor.exp[j]: mfactor.exp[i];
            x=x*nfactor.fact[j]*min;
            i++;
            j++;
        }
    }
    return x;
}
int main()
{
    int m=0,n=10;
    cout<<middle_school(m,n);
    return 0;
}