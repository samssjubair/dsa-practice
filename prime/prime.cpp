#include<iostream>
#include<vector>
using namespace std;

bool isPrime(int n){
    if(n<2){
        return false;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

 int diagonalPrime(vector<vector<int> >& nums) {
        vector<int> allPrimes;
        int len= nums.size();
        for(int i=0;i<len;i++){
            if(isPrime(nums[i][i])){
                allPrimes.push_back(nums[i][i]);
            }
            if(isPrime(nums[i][len-i-1])){
                allPrimes.push_back(nums[i][len-i-1]);
            }
        }
        if(!allPrimes.size()) return 0;
        int largestPrime=allPrimes[0];
        for(int i=1;i<allPrimes.size();i++){
            if(largestPrime<allPrimes[i]){
                largestPrime=allPrimes[i];
            }
        }
        return largestPrime;
    }

int main(){
    int n;
    cin >> n;
    vector<vector<int> > nums(n, vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> nums[i][j];
        }
    }
    cout << diagonalPrime(nums) << endl;
}