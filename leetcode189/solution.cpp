#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<int>& nums, int k) {
    int size=nums.size();
    vector<int> ans(size);
    for(int i=0;i<size;i++){
        if(i+k>=size){
            ans[(i+k)%size]=nums[i];
        }
        ans[i+k]=nums[i];
    }
    nums=ans;
}

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    // v.push_back(10);
    int n;
    cin>>n;
    
    // cout << rotate(v,n)<<endl;
    rotate(v,n);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    return 0;
}