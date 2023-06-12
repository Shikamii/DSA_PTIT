#include<bits/stdc++.h>
#include<stack>
#include<queue>
using namespace std;

#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
const ll mod = 1e9+7;
const ll N = 1e6+8;

int n, m;
bool visited[1008];
vector<int> adj[1008];
void input(){
    memset(adj, 0, sizeof(adj));
    memset(visited, false, sizeof(visited));
    cin >> n >> m;
    for(int i=1; i<=m; i++){
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
}
void dfs(int u){
    visited[u] = true;
    for(int i : adj[u]){
        if(visited[i] == false){
            dfs(i);
        }
    }
}

void solve(){
    input();
    int cnt = 0;
    for(int i=1; i<=n; i++){
        if(visited[i] == false){
            cnt++;
            dfs(i);
        }
    }
    cout << cnt << '\n';
}
int main()
{
    faster();
    int t = 1;
    cin >> t;
    while(t--){
        solve();
        // cout << '\n';
    }
}