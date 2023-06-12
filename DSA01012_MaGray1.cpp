#include<bits/stdc++.h>
#include<stack>
#include<queue>
using namespace std;

#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
const ll mod = 1e9+7;
const ll N = 1e6+8;

void solve(){
    int n;
    cin >> n;
    int k = pow(2, n);  // độ dài số mã Gray khi n = ...
    string s[k+8];
    s[1] = "0";   // ma gray thu 1
    s[2] = "1";
    if(n>1){
        int t = 2; // lay doi xung qua t;
        for(int i=2; i<=n; i++){
            int l = pow(2, i);  // do dai gray thu i

            for(int j=1; j<=t; j++){  // lay dx qua chuoi 1
                // xay dung n = 2 thi lay dx qua 2^(n-1) = 2;
                // xay dung n=3 thi lay dx qua 2^(n-1) = 4

                s[l-j+1] = "1" + s[j]; // nua sau cua n = 1 + nua dau cua n-1;
                s[j] = "0" + s[j];    // nua dau cua n = 0 + nua dau cua n-1;
            }
            t = l; // reset lai vi tri dx
        }
    }
    for(int i=1; i<=k; i++){
        cout << s[i] << " ";
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