#include<iostream>
using namespace std;

#include <bits/stdc++.h>
bool ifpos(vector<int> &arr,int m,int n,int mid){
  int sc=1;
  int sum=0;
  for(int i=0;i<m;i++){
    if((arr[i]+sum)<=mid){
      sum+=arr[i];
      
    }
    else{
      sc++;
      if(sc>n || arr[i]>mid){
        return false;
      }
      sum=arr[i];
    }
  }
  return true;
} 
long long ll(int n, int m, vector<int> time) 
{	  
	int s=0,e,sum=0;
	long long int ans;
	for(int i=0;i<m;i++){
		sum+=time[i];
	}
	e=sum;
	long long int mid=s+(e-s)/2;
	while(s<=e){
		if(ifpos(time,m,n,mid)){
			ans=mid;
			e=mid-1;
		}
		else{
			s=mid+1;
		}
		mid=s+(e-s)/2;
	}
	return ans;
}
	// Write your code here.
int main()
{
    vector<int> time={1,2,2,3,3,4};
    
    cout<<"index"<<ll(3,6,time);
    
    return 0;
}