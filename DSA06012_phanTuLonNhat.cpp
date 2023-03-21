#include<bits/stdc++.h>
#include<stack>
#include<queue>
using namespace std;

#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
const ll mod = 1e9+7;
const ll N = 1e6+8;

void solve(){
    int n, k;
    cin >> n >> k;
    priority_queue<int> pq;
    int x;
    for(int i=1; i<=n; i++){
        cin >> x;
        pq.push(x);
    }
    while(pq.size() && k){
        if(pq.size()){
            cout << pq.top() <<  " ";
            pq.pop();
            k--;
        }
    }
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