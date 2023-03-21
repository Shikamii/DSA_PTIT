#include<bits/stdc++.h>

using namespace std;

int n;   // so dinh
int m;   // so canh

int a[1008][1008];    // luu ma tran ke
 vector<int> adj[1008]; // luu danh sach ke

vector<pair<int, int>> edge;  // luu danh sach canh

void solve(){
    //vector<int> adj[1008]; // luu danh sach ke
    memset(adj, 0, sizeof(adj));
    cin >> n >> m;
    for(int i=1; i<=m; i++){
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
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