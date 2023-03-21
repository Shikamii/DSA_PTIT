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
    int ans = n+m;
    multiset<int> se;
    int x;
    for(int i=0; i<ans; i++){
        cin >> x;
        se.insert(x);
    }
    for(auto it = se.begin(); it != se.end(); it++){
        cout << *it << " ";
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