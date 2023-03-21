#include<bits/stdc++.h>
#include<stack>
#include<queue>
using namespace std;

#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
const ll mod = 1e9+7;
const ll N = 1e6+8;

int n, k, ok, a[1008];

void solve(){
    cin >> n >> k;
    for(int i=1; i<=k; i++) cin >> a[i];

    int i = k;
    while(i>=1 && a[i]==n-k+i){
        i--;
    }
    if(i==0){
        for(int i=1; i<=k; i++){
            cout << i << " ";
        }
        cout << '\n';
    }
    else{
        a[i]++;
        for(int j=i+1; j<=k; j++){
            a[j] = a[j-1]+1;
        }
        for(int i=1; i<=k; i++){
            cout << a[i] << " ";
        }
        cout << '\n';
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