#include<bits/stdc++.h>
#include<stack>
#include<queue>
using namespace std;

#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
const ll mod = 1e9+7;
const ll N = 1e6+8;

void solve(){
    int n, x;
    cin >> n >> x;
    map<int, int> mp;
    int tmp;
    for(int i=1; i<=n; i++){
        cin >> tmp;
        mp.insert({tmp, i});
    }

    cout << mp[x] << '\n';
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