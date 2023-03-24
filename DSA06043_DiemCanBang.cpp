#include<bits/stdc++.h>
#include<stack>
#include<queue>
using namespace std;

#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
const ll mod = 1e9+7;
const ll N = 1e6+8;

// bool canBang(int a[], int idx, int n){
//     int sum1=0;
//     int sum2=0;
//     for(int i=0; i<n; i++){
//         if(i < idx){
//             sum1 += a[i];
//         }
//         if(i > idx){
//             sum2 += a[i];
//         }
//     }
//     return sum1==sum2;
// }

void solve(){
    int n;
    cin >> n;
    vector<int> a(n + 1, 0);
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
        a[i] += a[i - 1];         // mảng cộng dồn luôn
    }

    for (int i = 1; i <= n; ++i) {
        int sum_left = a[i - 1];         // tổng bên trái i(từ 1 đến i-1);
        int sum_right = a[n] - a[i];     // tổng bên phải i(từ i+1 đến n);
        if (sum_left == sum_right) {
            cout << i << '\n';
            return;
        }
    }
    cout << -1 << '\n';
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