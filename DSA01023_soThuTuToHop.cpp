#include<bits/stdc++.h>
#include<stack>
#include<queue>
using namespace std;

#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
const ll mod = 1e9+7;
const ll N = 1e6+8;

int n, k, ok, a[100], s[100];

void ktao(){
    for(int i=1; i<=k; i++) a[i] = i;
}
void sinh(){
    int i=k;
    while(i>=1 && a[i]==n-k+i){
        i--;
    }
    if(i==0) ok = 0;
    else{
        a[i]++;
        for(int j=i+1; j<=k; j++){
            a[j] = a[j-1]+1;
        }
    }
}

bool check(int a[], int s[], int k){
    for(int i=1; i<=k; i++){
        if(a[i]!=s[i]) return false;
    }
    return true;
}
void solve(){
    cin >> n >> k;
    for(int i=1; i<=k; i++) cin >> s[i];

    ok = 1;
    ktao();
    int cnt = 1;
    while(ok){
        if(check(a, s, k)){
            cout << cnt << '\n';
            return;
        }
        else{
            sinh();
            cnt++;
        }
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