#include<bits/stdc++.h>

using namespace std;

int n, m;
int a[1008][1008];

vector<int> adj[1008];
vector<pair<int, int>> edge;

void solve(){
    memset(adj, 0, sizeof(adj));
    cin >> n >> m;
    for(int i=1; i<=m; i++){
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
    }
    for(int i=1; i<=n; i++){
        cout << i << ": ";
        for(auto x : adj[i]){
            cout << x << " ";
        }
        cout << '\n';
    }

}
int main()
{
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}