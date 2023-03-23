#include<iostream>
#include <vector>    
#include <algorithm>  
using namespace std;


string reverseWord(string& s){
        int len=s.size();
    int i=0;
    for(int j=0;j<len;j++){
        if(s[j]==' '){
            reverse(s.begin()+i,s.begin()+j);
            i=j+1;
        }
        else if(j==len-1){
            reverse(s.begin()+i,s.end());
        }
    }
    return s;
}

int main(){
    string s;
    cin>>s;
    string newS=reverseWord(s);
    cout<<s.begin()<<endl;
}