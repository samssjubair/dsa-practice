#include<iostream>
using namespace std;

bool isPowerOfTwoIterative(int n) {
    while(n){
    if(n==1) return true;
    if(n%2==0){
        n=n/2;
        
    }else{
        break;
    }
    
}
return false;
}

bool isPowerOfTwo(int n) {
    if(n<=0) return false;
    return ((n&(n-1))==0);
}

int main(){
    int input;
    cin>>input;
    cout<<isPowerOfTwo(input)<<endl;
}