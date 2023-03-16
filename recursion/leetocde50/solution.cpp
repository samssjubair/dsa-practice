#include <iostream>
using namespace std;

// int pow(int x, int n){
//     if(n==0) return 1;
//     else return x * pow(x,n-1);
// }

float pow(float x, int n){
    if(n==0) return 1;
    if(n<0) return pow(1/x,static_cast<long long int>(-1)*n);

    if(n%2==0) {
        float temp= pow(x,n/2);
        return temp*temp;
    }
    else{
        return x* pow(x,n-1);
    }
}

// 2^6=  (2*2)^3

int main () {
    float x;
    int n;
    cin >>x >> n;
    float result=pow(x,n);
    cout <<result << endl;
}