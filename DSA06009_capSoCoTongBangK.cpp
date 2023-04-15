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
    int a[n];
    for(int &i : a) cin >> i;
    int cnt = 0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(a[i]+a[j]==k) cnt++;
        }
    }
    cout << cnt << '\n';
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