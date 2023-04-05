#include<iostream>
#include<vector>
using namespace std;

int numberOfOnes(int n){
        int count=0;
        while(n){
            count+=n%2;
            n=n/2;
        }
        return count;
    }
vector<int> countBits(int n) {
    vector<int> v;
    for(int i=0;i<=n;i++){
        v.push_back(numberOfOnes(i));
    }
    return v;
}

int main(){
    int n;
    cin>>n;
    vector<int> v=countBits(n);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}