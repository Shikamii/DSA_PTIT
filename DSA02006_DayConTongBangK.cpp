#include<bits/stdc++.h>

using namespace std;

int n, k, tong;
int ok = 0;
int a[18];
int X[18];
void check(int k){
    int sum = 0;
    for(int i=1; i<=k; i++){
        sum += a[X[i]];
    }
    if(sum==tong){
        cout  << "[";
        for(int i=1; i<=k; i++){
            cout << a[X[i]];
            if(i!=k) cout << " ";
        }
        cout << "]";
    }
}
void Try(int k, int i){
    for(int j = X[i-1]+1; j<=n-k+i; j++){
        X[i] = j;
        if(i==k){
            check(k);
            ok = 1;
        }
        else{
            Try(k, i+1);
        }
    }
}
void solve(){
    cin >> n >> tong;
    for(int i=1; i<=n; i++) cin >> a[i];
    sort(a+1, a+n+1);
    //for(int i=1; i<=n; i++) cout << a[i] << " ";


    for(int i=n; i>=1; i--){
        Try(i, 1);
    }
    if(!ok) cout << -1;
}
int main()
{
    int t;
    cin >> t;
    while(t--){
        solve();
        cout << '\n';
    }
}