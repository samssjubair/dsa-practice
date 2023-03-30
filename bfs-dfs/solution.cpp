#include<iostream>
#include<vector>
#include<queue>
using namespace std;

const int N=1e5+2;
vector<int> g[N];
bool vis[N];

void dfs(int source){
    vis[source]=true;
    cout<<source<<" ";
    for(int child : g[source]){
        if(!vis[child]){
            dfs(child);
        }
    }
}

queue<int> q;
void bfs(int source){
    q.push(source);
    vis[source]=true;
    while(!q.empty()){
        int node=q.front();
        q.pop();
        for(int child: g[node]){
            vis[child]=true;
            q.push(child);
            cout<<child<<" ";
        }
    }
}

int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    dfs(1);
}