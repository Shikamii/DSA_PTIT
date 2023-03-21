#include<bits/stdc++.h>
#include<stack>
#include<queue>
using namespace std;

#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
const ll mod = 1e9+7;
const ll N = 1e6+8;

int a[N];
int sum(int a[], int n){
    int tong = 0;
    for(int i=1; i<=n; i++){
        if(a[i] != 0) tong += 1;
    }
    return tong;
}
bool check(int a[], int n){
    int cnt = 0;
    for(int i=1; i<=n; i++){
        if(a[i]==0) cnt++;
    }
    if(cnt==n) return false;
    else return true;
}
void solve(){
    int n;
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> a[i];
    }

    while(check(a, n)){
        cout << sum(a, n) << " ";
        for(int i=1; i<=n; i++){
            if(a[i] != 0) a[i]--;
        }
    }

}
int main()
{
    faster();
    int t = 1;
    //cin >> t;
    while(t--){
        solve();
    }
}