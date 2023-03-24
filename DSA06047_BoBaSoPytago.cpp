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
    ll a[n];
    for(ll &i : a) cin >> i;
    sort(a, a+n);
    for(ll &i : a) i = i*i;
    
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            long long tmp = a[i]+a[j];
            if(binary_search(a, a+n, tmp)){
                cout << "YES" << '\n';
                return;
            }
        }
    }
    cout << "NO";
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