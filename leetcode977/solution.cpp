#include <iostream>
#include <vector>
using namespace std;

vector<int> sortedSquares(vector<int>& nums){
    for(int i=0;i<nums.size();i++){
        nums[i]=nums[i]*nums[i];
    }
    sort(nums.begin(),nums.end());
    return nums;
}

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(9);
    v.push_back(2);
    v.push_back(-2);
    v.push_back(9);
    v.push_back(10);
    // int target;
    // cin>>target;
    
    // cout << sortedSquares(v)<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    return 0;
}