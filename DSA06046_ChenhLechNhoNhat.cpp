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
    vector<int> a(n);
    for(int &i : a) cin >> i;
    sort(a.begin(), a.end());
    // mảng đã sắp xếp rồi nên khoảng cách giữa hai phần từ liên tiếp(i-1, i) sẽ là khoảng cách nhỏ nhất các phần từ từ 0 đến i;
    int minx = 1e9;
    for(int i=1; i<n; i++){
        minx = min(minx, a[i]-a[i-1]);
    }
    cout << minx << '\n';

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