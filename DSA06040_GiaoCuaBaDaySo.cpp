#include<bits/stdc++.h>
#include<stack>
#include<queue>
using namespace std;

#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
const ll mod = 1e9+7;
const ll N = 1e6+8;

void solve(){
    int n, m, k;
    cin >> n >> m >> k;
    ll a[n], b[m], c[k];
    for(auto &i : a) cin >> i;
    for(auto &i : b) cin >> i;
    for(auto &i : c) cin >> i;

    vector<ll> v;
    for(ll i : a){
        for(ll j : b){
            for(ll e : c){
                if(i == j && j == e){
                    v.push_back(i);
                }
            }
        }
    }
    if(v.size()==0){
        cout << -1 << '\n';
        return;
    }
    for(auto i : v) cout << i << " ";
    cout << '\n';
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