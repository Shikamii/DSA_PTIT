#include<bits/stdc++.h>
#include<stack>
#include<queue>
using namespace std;

#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
const ll mod = 1e9+7;
const ll N = 1e6+8;

void solve(){
    int n;
    cin >> n;
    int x;
    map<int, int> mp;
    for(int i=0; i<n; i++){
        cin >> x;
        mp[x]++;
    }
    int ans = -1, cnt = -1;
    for(auto it : mp){
        if(it.second > cnt){
            ans = it.first;
            cnt = it.second;
        }
    }
    if(cnt > (double)n/2) cout << ans << '\n';
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