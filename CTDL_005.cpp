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
    multiset<int> se;

    int tmp;
    for(int i=1; i<=n; i++){
        cin >> tmp;
        se.insert(tmp);
    }
    int x; cin >> x;

    se.erase(x);
    for(auto it = se.begin(); it != se.end(); it++){
        cout << *it << " ";
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