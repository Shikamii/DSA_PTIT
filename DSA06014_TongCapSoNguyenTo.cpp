#include<bits/stdc++.h>
#include<stack>
#include<queue>
using namespace std;

#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
const ll mod = 1e9+7;
const ll N = 1e6+8;

int a[N];
void sang(){
    for(int i=0; i<N; i++) a[i] = 1;
    a[0] = a[1] = 0;
    for(int i=2; i<sqrt(N); i++){
        if(a[i]){
            for(int j = i*i; j<N; j+=i){
                a[j] = 0;
            }
        }
    }
}
void solve(){
    int n;
    cin >> n;
    int ok = 0;
    for(int i=2; i<=(n); i++){
        if(a[i]){
            if(a[n-i]){
                ok = 1;
                cout << i << " " << n-i << '\n';
                break;
            }
        }
    }
    if(!ok) cout << -1 << '\n';
}
int main()
{
    faster();
    int t = 1;
    cin >> t;
    sang();
    while(t--){
        solve();
    }
}