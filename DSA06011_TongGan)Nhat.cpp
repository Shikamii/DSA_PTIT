#include<bits/stdc++.h>
#include<stack>
#include<queue>
using namespace std;

#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
const ll mod = 1e9+7;
const ll N = 1e6+8;

// so gan 0 nhat => la so co tri tuyet doi cua no gan 0 nhat
//=> sap xep day theo tri tuyet doi tang dan va lay phan tu dau tien
bool cmp(int a, int b){
    // if(abs(a) == abs(b))
    //     return a>b;
    // else return abs(a) < abs(b);
    return abs(a) < abs(b);
}
void solve(){
    int n;
    cin >> n;
    // vector<int> a(n);
    // for(int &i : a) cin >> i;
    // vector<int> v;
    // for(int i=0; i<n; i++){
    //     for(int j=i+1; j<n; j++){
    //         int tmp = a[i] + a[j];
    //         v.push_back(tmp);
    //     }
    // }
    // sort(v.begin(), v.end(), cmp);
    // for(auto i : v){
    //     cout << i << " ";
    // }
    //cout << v[0] << '\n';

    int ans = 2e6;
    vector<int> a(n);
    for (int &i : a) cin >> i;
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            int sum = a[i] + a[j];
            if (abs(sum) < abs(ans)) ans = sum;
        }
    }
    cout << ans << '\n';
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