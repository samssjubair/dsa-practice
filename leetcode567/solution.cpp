#include<iostream>
#include <map>
#include<vector>
using namespace std;

bool checkInclusion(string s1, string s2) {
    if(s1.length() > s2.length()) return false;

        // Create a vector to store the frequency of each character in s1
        vector<int> count(26, 0);
        for(int i=0;i<s1.length();i++) {
            count[s1[i]-'a']++; // Update the frequency count of the character s1[i]
        }

        // Initialize two pointers to slide the window and a length variable
        int left = 0, right = 0, len = s1.length();
        while(right < s2.length()) {
            // If the character at the right pointer is in s1
            if(count[s2[right]-'a'] > 0) {
                count[s2[right]-'a']--; // Decrement the frequency count of the character
                len--; // Decrement the length variable
                right++; // Move the right pointer to the right
            } else {
                // If the character at the left pointer is not in s1
                count[s2[left]-'a']++; // Increment the frequency count of the character
                len++; // Increment the length variable
                left++; // Move the left pointer to the right
            }
            // If we have found a permutation of s1 in s2
            if(len == 0) return true;
        }
        // If we have not found a permutation of s1 in s2
        return false;
    }
    


int main(){
    string s1,s2;
    cin>>s1>>s2;
    cout<<checkInclusion(s1,s2)<<endl;

}