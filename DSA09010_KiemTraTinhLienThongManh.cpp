#include<bits/stdc++.h>
#include<stack>
#include<queue>
using namespace std;

#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
const ll mod = 1e9+7;
const ll N = 1e6+8;

int n, m;
vector<int> adj[1008];
bool visited[1008];
void input(){
    memset(adj, 0, sizeof(adj));
    memset(visited, false, sizeof(visited));
    cin >> n >> m;
    for(int i=1; i<=m; i++){
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
    }
}
void bfs(int u){
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while(!q.empty()){
        int v = q.front();
        q.pop();
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
    int cnt = 0;
    for(int i=1; i<=n; i++){
        if(visited[i] == false){
            cnt++;
            bfs(i);
        }
    }
    if(cnt == 1) cout << "YES" << '\n';
    else cout << "NO" << '\n';
}
int main()
{
    faster();
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}

void ham2(){

}
void ham1(){
    ham2();
}