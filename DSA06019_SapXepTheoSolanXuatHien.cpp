#include<bits/stdc++.h>
#include<stack>
#include<queue>
using namespace std;

#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
const ll mod = 1e9+7;
const ll N = 1e6+8;

int dem[N];

bool cmp(int a, int b){
    if(dem[a] == dem[b]){
        return a < b;
    }
    return dem[a] > dem[b];
}
void solve(){
    int n; 
    cin >> n;
    int a[n];
    for(int &i : a){
        cin >> i;
        dem[i]++;
    }
    stable_sort(a, a+n, cmp);
    for(int i : a) cout << i << " ";
    cout << '\n';
    memset(dem, 0, N);
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