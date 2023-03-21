#include<bits/stdc++.h>
#include<stack>
#include<queue>
using namespace std;

#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
const ll mod = 1e9+7;
const ll N = 1e6+8;

void solve(){
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for(auto &i : a) cin >> i;
    for(auto &i : b) cin >> i;
    set<int> se;
    for(int i : a) se.insert(i);
    for(int i : b) se.insert(i);

    for(auto i : se) cout << i << " ";
    cout << '\n';

    vector<int> v;
    for(int i : a){
        if(binary_search(b, b+n, i)) v.push_back(i);
    }
    for(auto i : v) cout << i << " ";
    cout << '\n';
    memset(a, 0, sizeof(a));
    memset(b, 0, sizeof(b));
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