#include<bits/stdc++.h>
#include<stack>
#include<queue>
using namespace std;

#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
const ll mod = 1e9+7;
const ll N = 1e6+8;

int t;
queue<int> q;
void solve(){
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        if(s == "PUSH"){
            int x;
            cin >> x;
            q.push(x);
        }
        if(s == "POP"){
            if(q.empty()) continue;
            else q.pop();
        }
        if(s == "PRINTFRONT"){
            if(q.empty()) cout << "NONE" << '\n';
            else cout << q.front() << '\n';
        }
    }
}
int main()
{
    faster();
    solve();
}