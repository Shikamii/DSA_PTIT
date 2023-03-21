#include<bits/stdc++.h>
#include<stack>
#include<queue>
using namespace std;

#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
const ll mod = 1e9+7;
const ll N = 1e6+8;

int n, k, a[1000], ok, s[1000];

void ktao(){
    for(int i=1; i<=k; i++){
        a[i] = i;
    }
}
void sinh(int ans){
    int i = k;
    while(i>=1 && a[i]==ans-k+i) i--;
    if(i==0){
        ok = 0;
    }
    else{
        a[i]++;
        for(int j=i+1; j<=k; j++){
            a[j] = a[j-1]+1;
        }
    }
}
void solve(){
    cin >> n >> k;
    set<int> se;
    int x;
    for(int i=1; i<=n ;i++){
        cin >> x;
        se.insert(x);
    }
    auto it = se.begin();
    for(int i=1; i<=se.size(); i++){
        s[i] = *it;
        it++;
    }
    // for(int i=1; i<=se.size(); i++) cout << s[i] << " ";
    int ans = se.size();
    ktao();
    ok = 1;
    while(ok){
        for(int i=1; i<=k; i++){
            cout << s[a[i]] << " ";
        }
        cout << '\n';
        sinh(ans);
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