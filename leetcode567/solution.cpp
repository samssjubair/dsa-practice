#include<iostream>
#include <map>
#include<vector>
using namespace std;

bool areMapsEqual(map<char,int> a, map<char,int> b){
    for(char ch='a';ch<='z';ch++){
        if(a[ch]!=b[ch])
            return false;
    }
    return true;
}

bool checkInclusion(string s1, string s2) {
    map<char,int>mp1;
    for(char ch : s1){
        mp1[ch]++;
    }
    int i=0,j=0;
    map<char,int>mp2;
    while(j<s2.size()){
        mp2[s2[j]]++;
        if(j-i+1==s1.size()){
            if(areMapsEqual(mp1,mp2)) return true;
            mp2[s2[i]]--;
            i++;
        }

        j++;
    }
    return false;

}
    


int main(){
    string s1,s2;
    cin>>s1>>s2;
    cout<<checkInclusion(s1,s2)<<endl;

}