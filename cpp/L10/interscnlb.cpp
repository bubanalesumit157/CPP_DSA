#include<iostream>
#include<vector>
using namespace std;
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	// Write your code here.
	vector <int> n1;
	int i=0,j=0;
	while(i<n && j<m){
		
		if(arr1[i]==arr2[j]){
		n1.push_back(arr1[i]);
		i++;
		j++;
		}

		else if(arr1[i]<arr2[j]){
		i++;
		}
		else{
		j++;
		}
	}
	return n1;
}
int main(){
    vector<int> arr1={2,3,4,5},arr2={1,2,3,4};
    vector<int> arr=findArrayIntersection(arr1,4,arr2,4);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}