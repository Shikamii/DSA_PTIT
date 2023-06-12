#include<bits/stdc++.h>
#include<stack>
#include<queue>
using namespace std;

#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
const ll mod = 1e9+7;
const ll N = 1e6+8;

void solve(){
    int n, m;
    cin >> n >> m;
    int a[n], b[m], dd[100008] = {0};
    for(int i=0; i<n; i++){
        cin >> a[i];
        dd[a[i]]++;
    }
    for(int i=0; i<m; i++){
        cin >> b[i];
        dd[b[i]]++;
    }
    // for(int i : a) cout << i << " ";
    // for(int i : b) cout << i << " ";
    for(int i=0; i<100008; i++){
        if(dd[i] > 0) cout << i << " ";
    }
    cout << '\n';
    for(int i=0; i<100008; i++){
        if(dd[i] == 2) cout << i << " ";
    }
    cout << '\n';
    memset(dd, 0, sizeof(dd));

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