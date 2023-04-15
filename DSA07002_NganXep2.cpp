#include<bits/stdc++.h>
#include<stack>
#include<queue>
using namespace std;

#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
const ll mod = 1e9+7;
const ll N = 1e6+8;

stack<int> st;
string s;
int a;
void solve(){
    cin >> s;
    if(s == "PUSH"){
        cin >> a;
        st.push(a);
    }
    else if(s == "POP"){
        if(st.size()){
            st.pop();
        }
    }
    else{
        if(st.size()){
            cout << st.top() << '\n';
        }
        else{
            cout << "NONE" << '\n';
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
    }
}