#include<bits/stdc++.h>
#include<stack>
#include<queue>
using namespace std;

#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
const ll mod = 1e9+7;
const ll N = 1e6+8;

struct num{
    int value, distance;
};

bool cmp(num a, num b){
    if(a.distance == b.distance){
        return a.value < a.value;
    }
    return a.distance<b.distance;
}
void solve(){
    int n, x;
    cin >> n >> x;
    num a[n];
    for(num &i : a){
        cin >> i.value;
        i.distance = abs(x-i.value);
    }
    stable_sort(a, a+n, cmp);
    for(num i : a) cout << i.value << " ";
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