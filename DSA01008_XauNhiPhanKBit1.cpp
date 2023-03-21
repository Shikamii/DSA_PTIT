#include<bits/stdc++.h>
#include<stack>
#include<queue>
using namespace std;

#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
const ll mod = 1e9+7;
const ll N = 1e6+8;

int a[100], n, ok, k;

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

bool check(int a[], int n, int k){
    int cnt = 0;
    for(int i=1; i<=n; i++){
        if(a[i]==1) cnt++;
    }
    if(cnt==k) return true;
    else return false;
}
void solve(){
    cin >> n >> k;
    ok = 1;
    ktao();
    while(ok){
        if(check(a, n, k)){
            for(int i=1; i<=n; i++) cout << a[i];
            cout << '\n';
        }
        sinh();
    }
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