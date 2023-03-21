#include<bits/stdc++.h>
#include<stack>
#include<queue>
using namespace std;

#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
const ll mod = 1e9+7;
const ll N = 1e6+8;

int n, a[100], ok, s[100];

void ktao(){
    for(int i=1; i<=n ;i++) a[i]=i;
}

void sinh(){
    int i=n-1; 
    while(i>=1 && a[i]>a[i+1]){
        i--;
    }
    if(i==0) ok = 0;
    else{
        int j = n;
        while(a[i]>a[j]) j--;
        swap(a[i], a[j]);
        reverse(a+i+1, a+n+1);
    }
}

bool check(int a[], int s[], int n){
    for(int i=1; i<=n ;i++){
        if(a[i] != s[i]) return false;
    }
    return true;
}
void solve(){
    cin >> n;
    for(int i=1; i<=n; i++) cin >> s[i];

    int ans = 0;
    ktao();
    ok = 1;
    while(ok){
        ans++;
        if(check(a, s, n)){
            cout << ans << '\n';
            return;
        }
        else sinh();
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