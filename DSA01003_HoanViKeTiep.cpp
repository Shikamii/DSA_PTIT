#include<bits/stdc++.h>
#include<stack>
#include<queue>
using namespace std;

#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
const ll mod = 1e9+7;
const ll N = 1e6+8;

int a[100], n, ok;
void solve(){
    cin >> n;
    for(int i=1; i<=n; i++) cin >> a[i];

    int i=n-1;
    while(i>=1 && a[i]>a[i+1]){
        i--;
    }
    if(i==0){
        for(int i=1; i<=n; i++) cout << i << " ";
        cout << '\n';
    }else{
        int j=n;
        while(a[i]>a[j]) j--;
        swap(a[i], a[j]);
        reverse(a+i+1, a+n+1);
        for(int i=1; i<=n; i++) cout << a[i] << " ";
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