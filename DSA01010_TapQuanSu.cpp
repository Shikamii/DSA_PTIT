// giống bài DSA01021_tổ hợp thiếu theo
#include<bits/stdc++.h>
#include<stack>
#include<queue>
using namespace std;

#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
const ll mod = 1e9+7;
const ll N = 1e6+8;

int n, k, a[1000], ok;
void solve(){
    cin >> n >> k;
    set<int> se;
    for(int i=1; i<=k; i++){
        cin >> a[i];
        se.insert(a[i]);
    }

    int i = k;
    while(i>=1 && a[i]==n-k+i) i--;
    if(i==0){
        cout << k << '\n';
    }
    else{
        a[i]++;
        for(int j=i+1; j<=k; j++){
            a[j] = a[j-1]+1;
        }
        for(int i=1; i<=k; i++){
            se.insert(a[i]);
        }
        cout << se.size() - k << '\n';
    }
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