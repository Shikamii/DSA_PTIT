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
    cin >> v >> e;
    // duyet e canh
    for(int i=1; i<=e; i++){
        int a, b; cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));
}

void dfs(int u){
    // tham u
    cout << u << " ";
    vis[u] = true;

    for(int i : adj[u]){
        if(vis[i] == false){
            dfs(i);
        }
    }
}

void dfs_stack(int u){
    stack<int> st;
    st.push(u);
    
    while(!st.empty()){
        int tmp = st.top();
        st.pop();
        
        if(vis[tmp] == true) continue;
        else cout << tmp << " ";

        vis[tmp] = true;
        for(int i : adj[tmp]){
            if(vis[i] == false){
                st.push(i);
            }
        }
    }
}
int main()
{
    faster();
    input();
    // dfs(1);
    dfs_stack(1);
}
