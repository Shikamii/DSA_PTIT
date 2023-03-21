#include<bits/stdc++.h>
#include<stack>
#include<queue>
using namespace std;

#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
const ll mod = 1e9+7;
const ll N = 1e6+8;

int a[100], n, ok;

void ktao(){
    for(int i=1; i<=n; i++) a[i] = 0;
}

void sinh(){
    int i=n;
    while(i>=1 && a[i]==1){
        a[i] = 0;
        i--;
    }

    if(i==0){
        ok = 0;
    }
    else a[i] = 1;
}
void solve(){
    cin >> n;
    ok = 1;
    ktao();
    while(ok){
        for(int i=1; i<=n; i++){
            if(a[i]==0)cout << 'A';
            else cout << 'B';
        }
        cout << " ";
        sinh();
    }
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