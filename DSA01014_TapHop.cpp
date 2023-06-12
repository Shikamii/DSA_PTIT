#include<bits/stdc++.h>
#include<stack>
#include<queue>
using namespace std;

#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
const ll mod = 1e9+7;
const ll N = 1e6+8;

int n, k, s;
int a[100], ok;

void ktao(){
    for(int i=1; i<=k; i++) a[i] = i;
}
void sinh(){
    int i = k;
    while(i >= 0 && a[i] == n-k+i){
        i--;
    }
    if(i==0){
        ok = 0;
    }
    else{
        a[i]++;
        for(int j=i+1; j<=k; j++){
            a[j] = a[j-1]+1;
        }
    }
}

int sum(int a[], int k, int s){
    int tong = 0;
    for(int i=1; i<=k; i++) tong += a[i];
    return tong == s; 
}
void solve(){
    while(true){
        cin >> n >> k >> s;
        if(k > n){
            cout << 0 << '\n';
            continue;
        }
        if(n==0 && k==0 && s==0) return;
        ktao();
        int cnt = 0;
        ok = 1;
        while(ok){
            if(sum(a, k, s)) cnt++;
            sinh();
        } 
        cout << cnt << '\n';       
    }
}
int main()
{
    faster();
    solve();
}