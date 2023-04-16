#include<iostream>
#include<vector>
using namespace std;

void backtrack(vector<string>&ans,int n, int open, int close, string current_string){
    if(open==n&&close== n){
        ans.push_back(current_string);
        return;
    }
    if(open<n){
        backtrack(ans, n, open+1,close,current_string+"(");
    }
    if(open>close){
        backtrack(ans, n, open,close+1,current_string+")");
    }
}
vector<string> generateParenthesis(int n) {
    vector<string> ans;
    backtrack(ans,n,0,0,"");
    return ans;
}

int main(){
    int n;
    cin>>n;
    vector<string> ans=generateParenthesis(n);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
    cout<<ans.size();
}
