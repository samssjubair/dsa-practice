#include<iostream>
#include<vector>
#include<stack>
#include<queue>

using namespace std;
int main(){
    string s="kire";
    cout<< s.size()<<endl;
    vector<int> vt;
    vector<string> vs;
    // vs.pop_back("sex");
    // vs.push_back("tex");
    cout<<vs[0]<<endl;

    stack<int> st;
    st.push(1);
    st.push(5);
    st.push(3);

    while(!st.empty()){
        cout<< st.top()<<endl;
        st.pop();
    }
    

    queue<int> q;
    q.push(100);
    q.push(200);
    q.push(300);
    q.push(400);
    while(!q.empty()){
        // cout<<q.front()<<endl;
        q.pop();
    }

    priority_queue<int> pq;
    pq.push(21221);
    pq.push(200000);
    pq.push(1980);
    while(!pq.empty()){
        // cout<<pq.top()<<endl;
        pq.pop();
    }


    vector<int> ::iterator it;
    vector<int> v;
    v.push_back(20);
    v.push_back(40);
    v.push_back(50);
    for(it=v.begin();it<v.end();it++){
        // cout<< it<<endl;
        printf("%d",*it);
        // v.pop_back();
    }
    return 0;
}