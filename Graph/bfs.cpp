#include<bits/stdc++.h>
#include<stack>
#include<queue>
using namespace std;

#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
const ll mod = 1e9+7;
const ll N = 1e6+8;

int n;
int v, e, s;
vector<int> adj[2008];
bool vis[2008];

void input(){
    cin >> n >> e;
    for(int i=1; i<=e; i++){
        int a, b; cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));
}

void bfs(int u){
    queue<int> q;
    q.push(u);
    vis[u] = true;

    while(q.size()){
        int v = q.front();
        q.pop();
        // lay ra thi in luon
        cout << v << " ";
        // duyet ke cua v;
        for(int i : adj[v]){
            if(vis[i] == false){
                q.push(i);
                vis[i] = true;
            }
        }
    }
    
}
int main()
{
    faster();
    input();
    bfs(1);
}