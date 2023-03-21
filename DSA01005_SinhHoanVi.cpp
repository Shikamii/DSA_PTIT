#include<bits/stdc++.h>
#include<stack>
#include<queue>
using namespace std;

#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
const ll mod = 1e9+7;
const ll N = 1e6+8;

int n, a[100], ok;
void ktao(){
    for(int i=1; i<=n; i++) a[i] = i;
}
void sinh(){
    int i = n-1;
    while(i>=1 && a[i]> a[i+1]) i--;

    if(i==0) ok = 0;
    else{
        int j = n;
        while(a[i]>a[j]) j--;
        swap(a[i], a[j]);
        reverse(a+i+1, a+n+1);
    }
}
void solve(){
    cin >> n;
    ok = 1;
    ktao();
    while(ok){
        for(int i=1; i<=n; i++) cout << a[i];
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