#include<bits/stdc++.h>
#include<stack>
#include<queue>
using namespace std;

#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
const ll mod = 1e9+7;
const ll N = 1e6+8;

int n, m, u;
vector<int> adj[1008];
bool visited[1008];

void input(){
    memset(adj, 0, sizeof(adj));
    memset(visited, false, sizeof(visited));
    cin >> n >> m >> u;
    for(int i=1; i<=m; i++){
        int x, y; cin >> x >> y;
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

void bfs(int u){
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while(!q.empty()){
        int v = q.front();
        q.pop();

        cout << v << " ";
        for(int x : adj[v]){
            if(visited[x] == false){
                q.push(x);
                visited[x] = true;
            }
        }
    }
}
void solve(){
    input();
    bfs(u);
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