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
    int a[n];
    map<int, int> mp;
    for(int &i : a){
        cin >> i;
        mp[i]++;
    }
    int ok = 0;
    for(int i : a){
        if(mp[i] > 1){
            ok = 1;
            cout << i << '\n';
            return;
        }
    }
    if(!ok) cout << "NO" << '\n';
    // for(auto it : mp){
    //     cout << it.first << " " << it.second;
    //     cout << '\n';
    // }
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