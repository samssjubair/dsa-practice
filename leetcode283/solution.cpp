#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int>& nums){
    int c=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]!=0) {
            nums[c]=nums[i];
            c++;
        }
    }
    for(int i=c;i<nums.size();i++){
        nums[i]=0;
    }

}

int main(){
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(4);
    v.push_back(5);
    int size=v.size();
    moveZeroes(v);
    for(int i=0;i<size;i++){
        cout << v[i] <<" ";
    }
}