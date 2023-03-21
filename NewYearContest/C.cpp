#include<bits/stdc++.h>
#include<stack>
#include<queue>
using namespace std;

#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
const ll mod = 1e9+7;
const ll N = 1e6+8;

void solve(){
    int n, q;
    cin >> n >> q;
    map<int, int> mp;
    int x;
    for(int i=1; i<=n; i++){
        cin >> x;
        mp[x]++;
    }
    while(q--){
        int tmp;
        cin >> tmp;
        cout << mp[tmp] << '\n';
    }
}
int main()
{
    faster();
    int t = 1;
    //cin >> t;
    while(t--){
        solve();
    }
}