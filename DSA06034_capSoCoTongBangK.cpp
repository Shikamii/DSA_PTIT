#include<bits/stdc++.h>
#include<stack>
#include<queue>
using namespace std;

#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
const ll mod = 1e9+7;
const ll N = 1e6+8;

void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(int &i : a) cin >> i;
    sort(a.begin(), a.end());
    long long ans = 0; // note
    ll cnt = 0;
    for (int i = 0; i < n; ++i) {
        cnt = upper_bound(a.begin() + i + 1, a.end(), k - a[i]) - lower_bound(a.begin() + i + 1, a.end(), k - a[i]);
        // phai tim tu vi tri ngay sau no<phan tu hien tai> den end()
        ans += cnt;
        //cout << cnt << '\n';
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