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
    pair<int, int> a[n];
    for(int i=0; i<n; i++){
        cin >> a[i].first;
        a[i].second = i;
    }
    sort(a, a+n);  // sort la sort theo cai first;
    // for(pair i : a){
    //     cout << i.first << " " << i.second << '\n';
    // }
    int ans = -1;   // j-i max nhat
    int val = a[0].first;
    int idx = a[0].second;     // coi nhu la cai j

    for(int i=1; i<n; i++){
        if(a[i].first > val){     // a[j] > a[i];   // da sap xep r thi cai nay luon dung
            ans = max(ans, a[i].second - idx);  // j-i;  current;
        }
        if(idx > a[i].second){  // updated;
            idx = a[i].second;
            val = a[i].first;
        }
    }
    cout << ans << '\n';
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