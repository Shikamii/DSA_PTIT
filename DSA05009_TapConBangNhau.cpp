#include<bits/stdc++.h>

using namespace std;

int n, X[108];
int a[108];
int tong;
int ok = 0;

bool check(int k){
    int ans = 0;
    for(int i=1; i<=k; i++){
        ans += a[X[i]];   // tổng của dãy con mà mình sinh ra được
    }
    
    return ans == tong - ans;  // tong - tong day con
}
void inkq(int k){
    for(int i=1; i<=k; i++){
        cout << a[X[i]] << " ";
        //cout << X[i] << " ";
    }
    cout << '\n';
}
void Try(int i, int k){
    for(int j=X[i-1] + 1; j<=n-k+i; j++){
        X[i] = j;
        if(i==k){
            if(check(k)){
                //inkq(k);
                ok = 1;
                return; 
            }
        }
        else{
            Try(i+1, k);
        }
    }
}

void input(){
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> a[i];
        tong += a[i];
    }
    sort(a+1, a+n+1);
    // for(int i=1; i<=n; i++) cout << a[i] << " ";
    // cout << '\n';
    // cout << tong << '\n';

    for(int i=1; i<n; i++){
        Try(1, i);
        if(ok == 1){
            cout << "YES" << '\n';
            break;
        }
        
    }
    if(ok==0) cout << "NO" << '\n';
    

    memset(a, 0, sizeof(a));
    memset(X, 0, sizeof(X));
    tong = 0;
    ok = 0;
}
int main()
{
    int t;
    cin >> t;
    while(t--){
        input();
    }
}