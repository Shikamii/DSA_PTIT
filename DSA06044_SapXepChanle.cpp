#include<bits/stdc++.h>
#include<stack>
#include<queue>
using namespace std;

#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
const ll mod = 1e9+7;
const ll N = 1e6+8;

void solve(){
    int n; cin >> n;
    // int a[n];
    // vector<int> c, l;
    // for(int &i : a){
    //     cin >> i;
    //     if(i%2==0) c.push_back(i);
    //     else l.push_back(i);
    // }
    // sort(c.begin(), c.end());
    // sort(l.begin(), l.end());
    // int res1 = 0, res2 = c.size()-1;
    // for(int i=1; i<=n; i++){
    //     if(i%2==1){
    //         cout << l[res1] << " ";
    //         res1++;
    //     }
    //     else{
    //         cout << c[res2] << " ";
    //         res2--;
    //     }
    // }
    vector<int> a;
    vector<int> b;
    for (int i = 1; i <= n; ++i) {
        int x; cin >> x;
        if (i % 2 == 1) a.push_back(x);
        else b.push_back(x);
    }
    sort(a.begin(), a.end());
    sort(b.rbegin(), b.rend());
    for (int i = 0; i < b.size(); ++i) {
        cout << a[i] << " " << b[i] << " ";
    }
    if (n % 2 == 1) cout << a.back();
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