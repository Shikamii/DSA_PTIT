#include<bits/stdc++.h>
#include<stack>
#include<queue>
using namespace std;

#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
const ll mod = 1e9+7;
const ll N = 1e6+8;

/* Tư tưởng:
n <= 15;  => tối đa 15 chữ cái
bài này bản chất là tổ hợp chập k của n;

A: char(64+1)
*/

int n, k, a[100], ok;
void ktao(){
    for(int i=1; i<=k; i++) a[i]=i;
}

void sinh(){
    int i = k; 
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
void solve(){
    //cout << char(64);
    cin >> n >> k;
    ktao();
    ok = 1;
    while(ok){
        for(int i=1; i<=k; i++){
            cout << (char)(64+a[i]);
            //cout << a[i];
        }
        cout << '\n';
        sinh();
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