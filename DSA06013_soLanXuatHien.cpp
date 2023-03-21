#include<bits/stdc++.h>
#include<stack>
#include<queue>
using namespace std;

#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
const ll mod = 1e9+7;
const ll N = 1e6+8;

int dem[N] = {0};
void solve(){
    memset(dem, 0, N);
    int n, x;
    cin >> n >> x;
    int tmp;
    for(int i=1; i<=n; i++){
        cin >> tmp;
        dem[tmp]++;
    }
    if(dem[x]==0) cout << "-1" << '\n';
    else cout << dem[x] << '\n';

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