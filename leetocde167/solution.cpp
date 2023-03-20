#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& nums,int target){
    vector<int> ans;
    int l=0;
    int r=nums.size()-1;
    while(l<r){
        int sum=nums[l]+nums[r];
        if(sum==target){
            // cout<< l<<r<<endl;
            ans.push_back(l+1);
            ans.push_back(r+1);
            break;
        }
        else if(sum<target){
            cout<< l<<r<<endl;
            l++;
        }
        else if(sum>target){
            cout<< l<<r<<endl;
            r--;
        }
    }
    return ans;
}

int main(){
    vector<int> v;
    v.push_back(2);
    v.push_back(7);
    v.push_back(11);
    v.push_back(15);
    int size=v.size();
    // sort(nums.begin(),nums.end());
    vector<int> ans=twoSum(v,9);
    for(int i=0;i<ans.size();i++){
        cout << ans[i] <<" ";
    }
}