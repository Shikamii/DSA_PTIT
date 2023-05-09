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
    int a[n];
    for(int &i : a) cin >> i;
    sort(a, a+n);

    do{
        for(int i : a) cout << i << " ";
        cout << '\n';

    }while(next_permutation(a, a+n));
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