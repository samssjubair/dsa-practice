#include<iostream>
using namespace std;

int hammingWeight(uint32_t n) {
    int count =0;
    // if(n<0) return 0;
    while(n!=0){
        if(n%2==1) count++;
        n=n>>1;
    }
    return count;
}

int main(){
    uint32_t n = 0b00000000000000000000000000001011; // Example test case from LeetCode
    int count = hammingWeight(n);
    cout << count << endl; // Output: 3
    return 0;

}