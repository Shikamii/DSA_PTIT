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
    int a[n], b[m];
    for(int &i : a) cin >> i;
    int max = *max_element(a, a+n);
    for(int &i : b) cin >> i;
    int min = *min_element(b, b+m);

    cout << (long long)max * min << '\n';
    
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