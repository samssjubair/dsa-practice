#include <iostream>
#include<vector>
using namespace std;
vector<int> g[1000];
bool visited[1000];

void dfs(int source){
    visited[source]=true;
    cout <<source<<" ";
    for(int i=0;i<g[source].size();i++){
        int child= g[source][i];
        cout<<"parent "<<source<<" child "<<child<<endl;
        if(visited[child]) continue;
        dfs(child);
    }
}

int main(){
    int v,e;
    scanf("%d %d",&v,&e);
    for(int i=0;i<e;i++){
        int x,y;
        scanf("%d %d",&x,&y);
        g[x].push_back(y);
        g[y].push_back(x);
    }

    for(int i=0;i<v;i++){
        for(int j=0;j<g[i].size();j++){
            printf("%d ",g[i][j]);
        }
        cout<<endl;
    }

    dfs(1);
}