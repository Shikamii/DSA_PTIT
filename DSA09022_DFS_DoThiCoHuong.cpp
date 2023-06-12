#include<bits/stdc++.h>

using namespace std;

int n, m, u;
vector<int> adj[1008];
bool visited[1008];
void input(){
    memset(visited, false, sizeof(visited));
    memset(adj, 0, sizeof(adj));
    cin >> n >> m >> u;
    for(int i=1; i<=m; i++){
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        //adj[y].push_back(x);
    }
    // for(int i=1; i<=n; i++){
    //     cout << i << ": ";
    //     for(int x : adj[i]){
    //         cout << x << " ";
    //     }
    //     cout << '\n';
    // }
    // cout << '\n';
}
void dfs(int u){
    visited[u] = true;
    cout << u << " ";
    for(int x : adj[u]){
        if(visited[x] == false){
            dfs(x);
        }
    }
}
void solve(){
    input();
    dfs(u);
}
int main()
{
    int t;
    cin >> t;
    while(t--){
        solve();
        cout << '\n';
    }
}