#include<bits/stdc++.h>
#include<stack>
#include<queue>
using namespace std;

#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
const ll mod = 1e9+7;
const ll N = 1e6+8;

int a[100], ok;
int n, k;
void ktao(){
    for(int i=1; i<=k; i++) a[i] = i;
}
void sinh(){
    int i = k;
    while(i>=1 && a[i] == n-k+i){
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
bool check(int a[], int b[], int k){
    for(int i=1; i<=k; i++){
        if(a[i] != b[i]) return false;

    }
    return true;
}
void solve(){
    cin >> n >> k;
    int x[k+1];
    for(int i=1; i<=k; i++) cin >> x[i];
    int cnt = 0;
    for(int i=1; i<=k; i++) {
        if(i == x[i]) cnt++;
    }
    if(cnt==k){
        for(int i=1; i<=k; i++){
            cout << n-k+i << " ";
        }
        cout << '\n';
        return;
    }

    ktao();
    ok = 1;
    int dd[k+8];
    while(ok){
        // lưu lại cấu hình đã sinh
        for(int i=1; i<=k; i++){
            dd[i] = a[i];
        }
        sinh();
        if(check(a, x, k)){
            for(int i=1; i<=k; i++){
                cout << dd[i] << " ";
            }
            cout << '\n';
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