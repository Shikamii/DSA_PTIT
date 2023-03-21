#include<bits/stdc++.h>
#include<stack>
#include<queue>
using namespace std;

#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
const ll mod = 1e9+7;
const ll N = 1e6+8;

// danh sach canh sang danh sach ke
int v, e;
vector<int> adj[1008];

void solve(){
    for(int i=1; i<=v; i++) adj[i].clear();
    cin >> v >> e;
    for(int i=1; i<=e; i++){
        int a, b; cin >> a >> b;
        adj[a].push_back(b);
        // adj[b].push_back(a);
    }
    // for(int i=1; i<=v; i++) sort(adj[i].begin(), adj[i].end());
    for(int i=1; i<=v; i++){
        cout << i << ": ";
        for(int j : adj[i]){
            cout << j << " ";
        }
        cout << '\n';
    }
}
int main()
{
    faster();
    int t;
    cin >> t;
    while(t--){
        solve();
        // cout << '\n';
    }
}