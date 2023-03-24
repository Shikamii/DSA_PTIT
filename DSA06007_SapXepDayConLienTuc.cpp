#include<bits/stdc++.h>
#include<stack>
#include<queue>
using namespace std;

#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
const ll mod = 1e9+7;
const ll N = 1e6+8;

void solve(){
    int n; cin >> n;
    int a[n];
    for(int &i : a) cin >> i;
    int b[n];
    for(int i=0; i<n; i++){
        b[i] = a[i];
    }
    sort(b, b+n);
    int res1, res2;
    for(int i=0; i<n; i++){
        if(a[i] != b[i]){
            res1 = i;
            break;
        }
    }
    for(int i=n-1; i>=0; i--){
        if(b[i] != a[i]){
            res2 = i;
            break;
        }
    }
    cout << res1+1 << " " << res2+1 << '\n';
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