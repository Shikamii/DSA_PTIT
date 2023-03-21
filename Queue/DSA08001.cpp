#include<bits/stdc++.h>
#include<stack>
#include<queue>
using namespace std;

#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
const ll mod = 1e9+7;
const ll N = 1e6+8;

int n;
void solve(){
    queue<int> q;
    cin >> n;
    while(n--){
        int x; cin >> x;
        if(x==1){
            cout << q.size() << '\n';
        }
        if(x==2){
            if(q.empty()) cout << "YES" << '\n';
            else cout << "NO" << '\n';
        }
        if(x==3){
            int y;
            cin >> y;
            q.push(y);
        }
        if(x==4){
            if(q.empty()) continue;
            else q.pop();
        }
        if(x==5){
            if(q.empty()) cout << "-1" << '\n';
            else cout << q.front() << '\n';
        }
        if(x==6){
            if(q.empty()) cout << "-1" << '\n';
            else cout << q.back() << '\n';
        }
    }
}
int main()
{
    faster();
    int t = 1;
    cin >> t;
    while(t--){
        solve();
        // cout << '\n';
    }
}