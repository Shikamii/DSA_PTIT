#include<bits/stdc++.h>
#include<stack>
#include<queue>
using namespace std;

#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
const ll mod = 1e9+7;
const ll N = 1e6+8;

int n;
deque<int> q;
void solve(){
    cin >> n;
    while(n--){
        string s;
        cin >> s;
        if(s == "PUSHBACK"){
            int x;
            cin >> x;
            q.push_back(x);
        }
        if(s == "PUSHFRONT"){
            int x;
            cin >> x;
            q.push_front(x);
        }
        if(s == "PRINTFRONT"){
            if(q.empty()) cout << "NONE" << '\n';
            else cout << q.front() << '\n';
        }
        if(s == "PRINTBACK"){
            if(q.empty()) cout << "NONE" << '\n';
            else cout << q.back() << '\n';
        }
        if(s == "POPBACK"){
            if(q.empty()) continue;
            else q.pop_back();
        }
        if(s == "POPFRONT"){
            if(q.empty()) continue;
            else q.pop_front();
        }
    }
    
}
int main()
{
    faster();
    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
}