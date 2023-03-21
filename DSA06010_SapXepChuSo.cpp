#include<bits/stdc++.h>
#include<stack>
#include<queue>
using namespace std;

#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
const ll mod = 1e9+7;
const ll N = 1e7+8;

//long long a[N];
void solve(){
    //memset(a, 0, N);
    // for(int i=0; i<n; i++) cout << a[i] << " ";
    // cout << '\n';
    // int n;
    // cin >> n;
    // for(int i=0; i<n; i++) cin >> a[i];
    // set<int> se;
    // for(int i=0; i<n; i++){
    //     while(a[i]){
    //         se.insert(a[i]%10);
    //         a[i]/=10;
    //     }
    // }
    // for(auto it = se.begin(); it != se.end(); it++){
    //     cout << *it << " ";
    // }
    // cout << '\n';

    int n;
    cin >> n;
    cin.ignore();
    string s;
    getline(cin, s);
    set<char> se;
    for(int i=0; i<s.size(); i++){
        if(s[i] >= '0' && s[i] <= '9') se.insert(s[i]);
    }
    // for(auto it = se.begin(); it != se.end(); it++){
    //     cout << *it << " ";
    // }
    for(auto i : se) cout << i << " ";
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