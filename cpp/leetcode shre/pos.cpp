#include<iostream>
#include<vector>
using namespace std;

    int searchInsert(vector<int>& nums, int target) {
     int low =0, high= nums.size()-1;
     while(low<high)
     {
        int mid= (low+high)/2;
        cout<<mid<<" "<<low<<" "<<high<<endl;
        if(nums[mid]==target){
            return mid;

        }
        else if(nums[mid]<target)
        {
            low = mid+1;
        }
        else {
            high = mid-1;
        }
     }
     if(nums[high]<target)
     {
        return high+1;
     }
     if(nums[0]>target){
        return 0;
    }
    return 0;
    }

int main()
{
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(3);
    int target=0;
    cout<<nums[-1]<<endl;
    int a=searchInsert(nums,target);
    cout<<a;
    return 0;
}