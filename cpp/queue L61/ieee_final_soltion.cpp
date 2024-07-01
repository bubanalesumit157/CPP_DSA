#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;


int SUM(queue<long long int> q,int k){
    int s=0;
    for(int i=0;i<k;i++){
        s=s+q.front();
        q.pop();
    }
    if(k>1){
        s=s/2;
    }
    return s;
}

int sum_windows( vector<int> A,long long int N, long long int k,int balance_amt) {

    queue<long long int> q;
    if(k==0 || N==0 || balance_amt==0){
        return 0;
    }
    if(N>=k){
        for(int j=0;j<k;j++){
            q.push(A[j]); 
        }
    }

    int i=k;
    int sum_count=0;
    while(i<=N){
        int ele=SUM(q,k);
        if(ele <= balance_amt){
            sum_count++;
            // cout<<i<<endl;
        }
        q.pop();
        q.push(A[i]);
        
        i++;
    }
    
    return sum_count;
}


int main()
{
    int n ;
    cin>>n;
    vector<int> A;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        A.push_back(a);
    }
    long long int No_of_books;
    cin>>No_of_books;
    int balance_amt;
    cin>>balance_amt;
    int sum_count=sum_windows(A, n, No_of_books, balance_amt);
    cout<<sum_count;
    return 0;
}
