#include <iostream>
using namespace std;

bool isPowerOfThree(int n){
    while(n){
        if(n==1) return true;
        if(n%3==0){
            n=n/3;
            
        }else{
            break;
        }
        
        // cout<< n;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    int ans=isPowerOfThree(n);
    cout << ans << endl;
    // cout<< bool() <<endl;
    return 0;
}