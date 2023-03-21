#include<bits/stdc++.h>
#include<stack>
#include<queue>
using namespace std;

#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
const ll mod = 1e9+7;
const ll N = 1e6+8;

/*
Mặc định: 0 là 6
        1 là 8
chữ số đầu tiên là 1, cuối cùng là 0
ko có hai số 1 nào ở cạnh nhau
không có nhiều hơn 3 số 6 ở cạnh nhau

        */
int a[100], n, ok;

void ktao(){
    for(int i=1; i<=n; i++){
        a[i] = 0;
    }
}

void sinh(){
    int i = n;
    while(i>=1 && a[i]==1){
        a[i] = 0;
        i--;
    }
    if(i==0) ok = 0;
    else a[i] = 1;
}

bool checkDauCuoi(int a[], int n){
    if(a[1]==1 && a[n]==0) return true;
    else return false;
}

bool check8(int a[], int n){
    for(int i=1; i<n; i++){
        if(a[i]==a[i+1] && a[i] == 1) return false;
    }
    return true;
}

bool check6(int a[], int n){
    /*
    không có 3 chữ số 6 nào ở cạnh nhau
    => từ 6 chữ số 6 ở liền nhau là sai
    */
    
    for(int i=1; i<n-2; i++){
        if(a[i]==a[i+1] && a[i]==a[i+2] && a[i]==a[i+3] && a[i]==0){
            return false;
        }
    }
    return true;
}
void solve(){
    cin >> n;
    ok = 1;
    ktao();
    while(ok){
        if(checkDauCuoi(a, n)){
            if(check8(a, n)){
                if(check6(a, n)){
                    for(int i=1; i<=n; i++){
                        if(a[i]==1) cout << 8;
                        else cout << 6;
                    }
                    cout << '\n';
                }
            }
        }
        sinh();
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