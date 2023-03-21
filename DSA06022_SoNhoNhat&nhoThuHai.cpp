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
    // set<int> se;
    // int tmp;
    // for(int i=1; i<=n; i++){
    //     cin >> tmp;
    //     se.insert(tmp);
    // }
    // if(se.size()==1){
    //     cout << -1 << '\n';
    //     return;
    // }
    // int min1 = *se.begin();
    // int min2 = *se.begin()+1;

    // cout << min1 << " " << min2 << '\n';
    // // for(auto it : se) cout << it << " ";
    // // cout << '\n';
    int a[n];
    for(int &i : a) cin >> i;
    sort(a, a+n);
    if(a[0] == a[1]) cout << -1 << '\n';
    else cout << a[0] << " " << a[1] << '\n';
    
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