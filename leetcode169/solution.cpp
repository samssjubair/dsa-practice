#include <iostream>
#include <vector>
#include <cmath>
#include <unordered_map>
using namespace std;

// bruteforce
int majorityElementBF(vector<int>& nums){
    int majorityNumber=ceil(nums.size()/2.0);
    for(int i=0;i<nums.size();i++){
        int count=0;
        for(int j=i+1;j<nums.size();j++){
            if(nums[j]==nums[i]){
                count++;
                if(count>=majorityNumber){
                    return nums[i];
                }
            }
        }
    }
    return 0;
}

// using hashmap

int majorityElementHashMap(vector<int>& nums){
    int majorityNumber=ceil(nums.size()/2.0);
    unordered_map<int ,int> countMap;
    for(int i=0;i<nums.size();i++){
        countMap[nums[i]]++;
        if(countMap[nums[i]]>=majorityNumber){
            return nums[i];
        }
    }
    return 0;
}


// boyer moore

int majorityElement(vector<int>& v){
    int el=v[0];
    int c=0;
    for(int i=0;i<v.size();i++){
        if(c==0) el=v[i];
        else{
            if(el==v[i]){
                c++;
            }
            else{
                c--;
            }
        }
    }
    return el;
}

int main(){
    cout<< ceil(5/2);
    // initialize an empty array
    vector<int> v;
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int el;
        cin >> el;
        v.push_back(el);
    }
    cout<<majorityElement(v)<<endl;
    // for(int i=0;i<n;i++){
    //     cout << v[i] <<endl;
    // }
    
}