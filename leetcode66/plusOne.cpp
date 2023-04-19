#include<iostream>
#include<vector>
using namespace std;

vector<int> plusOne(vector<int>& digits) {
    int len=digits.size();
    for(int i=len-1;i>=0;i--){
        if(digits[i]<9){
            digits[i]++;
            return digits;
        }
        else{
            digits[i]=0;
        }
    }
    vector<int> ans(len+1, 0);
    ans[0]=1;
    return ans;

}
int main(){
    int n;
    cin>>n;
    vector<int> digits(n);
    for(int i=0;i<n;i++){
        cin>>digits[i];
    }
    vector<int> ans=plusOne(digits);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}