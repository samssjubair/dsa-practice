#include<iostream>
#include <map>
using namespace std;

int lengthOfLongestSubstring(string s){
    int j=0;
    int maxLength=0;
    int length=0;
    map<char,int> mp;
    for(int i=0;i<s.size();i++){
        mp[s[i]]++;
        length++;
        while(mp[s[i]]>1){
            mp[s[j++]]--;
            length--;
        }
        maxLength=max(length,maxLength);

    }
    return maxLength;
}

int main(){
    string s;
    cin>>s;
    int len=lengthOfLongestSubstring(s);
    cout<<len<<endl;
}

// abcabcdd