#include<iostream>
#include<vector>

using namespace std;
int pivot(vector<int>& nums,int s,int e){
    int m;
    while(s<=e){
        m=(s+e)/2;
        cout<<s<<" "<<e<<" "<<m<<" "<<endl;  //[5,1,2,3,4]
        if(nums[m]<nums[m-1] ){
            return m;
        }
        else if(nums[m]>nums[0]){
            s=m+1;
            cout<<1;
        }
        else{
            e=m;
        }

    }
    return -1;
}

int bs(vector<int>& nums,int s,int e, int target){
    int m;
    while(s<=e){
        m=(s+e)/2;
        cout<<s<<" "<<e<<" "<<m<<" "<<endl;
        if(nums[m]== target ){
            return m;
        }
        else if(nums[m]<target){
            s=m+1;
        }
        else{
            e=m-1;
        }
    }
    cout<<endl;
    return -1;
}

int search(vector<int>& nums, int target) {
    int n = nums.size();
    cout<<n<<endl;
    int p;
    p=pivot(nums,0,n-1);
    cout<<"p="<<p<<endl;
    if(target<nums[0]){
        return bs(nums,p,n-1,target);
    }
    else{
        return bs(nums,0,p-1,target);
    }
    return -1;
}
        
int main()
{
    vector<int> v;
    v.push_back(5);
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    // for(auto i:v){
    //     cout<<i<<" "<<endl;
    // }
    int n=search(v,4);
    cout<<endl<<n;
    return 0;
}