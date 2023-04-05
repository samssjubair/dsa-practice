#include<iostream>
using namespace std;

uint32_t reverseBits(uint32_t n) {
    uint32_t ans=0;
    for(int i=0;i<32;i++){
        bool bit=(n>>i) & 1;
        ans=bit<<(32-i-1) | ans;
    }
    return ans;
}

int main(){
    uint32_t n = 0b00000010100101000001111010011100; // Example test case from LeetCode
    uint32_t ans = reverseBits(n);
    cout << ans << endl; // Output: 964176192 (00111001011110000010100101000000)
    return 0;
}
