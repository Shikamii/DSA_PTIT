#include<bits/stdc++.h>
#include<stack>
#include<queue>
using namespace std;

#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
const ll mod = 1e9+7;
const ll N = 1e6+8;

int a[N];
int bs(int a[], int n, int x){
    int l = 0, r = n-1;
    while(l<=r){
        int tmp = (l+r)/2;
        if(a[tmp]==x) return tmp;
        else if(a[tmp]<x){
            l = tmp+1;
        }
        else r = tmp-1;
    }
    return 0;
}

void solve(){
    memset(a, N, 0);
    int n, k;
    cin >> n >> k;
    int a[n]; 
    for(int &i : a) cin >> i;
    if(bs(a, n, k)){
        cout << bs(a, n, k) + 1 << '\n';
    }
    else cout << "NO" << '\n';
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