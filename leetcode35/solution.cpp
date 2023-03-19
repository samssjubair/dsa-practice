#include <iostream>
#include <vector>
using namespace std;

int searchInsert(vector<int>& nums, int target){
    int l=0;
    int r=nums.size()-1;
    while(l<=r){
        int mid=(l+r)/2;
        if(nums[mid]==target){
            return mid;
        }
        else if(nums[mid]<target){
            l=mid+1;
        }
        else if(nums[mid]>target){
            r=mid-1;
        }
    }
    return l;
}

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(4);
    v.push_back(6);
    v.push_back(9);
    v.push_back(10);
    int target;
    cin>>target;
    
    cout<<searchInsert(v,target)<<endl;
    return 0;
}