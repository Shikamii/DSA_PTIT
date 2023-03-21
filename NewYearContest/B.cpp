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
    if(n==1){
        cout << "NO" << '\n';
        return;
    }
    map<int, int> mp;
    int x;
    for(int i=1; i<=n; i++){
        cin >> x;
        mp[x]++;
    }
    for(auto it = mp.begin(); it != mp.end(); it++){
        if((*it).second >= 2){
            cout << "NO" << '\n';
            return;
        }
    }
    cout << "YES" << '\n';
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