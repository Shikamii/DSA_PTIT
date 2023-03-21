#include<bits/stdc++.h>
#include<stack>
#include<queue>
using namespace std;

#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
const ll mod = 1e9+7;
const ll N = 1e6+8;

// dfs tren do thi vo huong

int v, e, u;
bool visited[2008];
vector<int> adj[2008];
void input(){
    cin >> v >> e >> u;
    for(int i=1; i<=v; i++) adj[i].clear();

    for(int i=1; i<=e; i++){
        int a, b; cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    // for(int i=1; i<=v; i++) sort(adj[i].begin(), adj[i].end());
    memset(visited, false, sizeof(visited));
}
void dfs(int u){
    cout << u << " ";
    visited[u] = true;

    for(int i : adj[u]){
        if(visited[i] == false){
            dfs(i);
        }
    }
}
int main()
{
    faster();
    int t;
    cin >> t;
    while(t--){
        input();
        dfs(u);
        cout << '\n';
    }
}