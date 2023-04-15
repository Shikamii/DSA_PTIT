#include<bits/stdc++.h>
#include<stack>
#include<queue>
using namespace std;

#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
const ll mod = 1e9+7;
const ll N = 1e6+8;

void solve(){
    string s;
    cin >> s;
    stack<char> st;
    for(int i=0; i<s.size(); i++){
        if(s[i] == ')' && !st.empty() && st.top() == '(')
            st.pop();
        else if(s[i] == ']' && !st.empty() && st.top() == '[')
            st.pop();
        else if(s[i] == '}' && !st.empty() && st.top() == '{')
            st.pop();
        else 
            st.push(s[i]);
    }
    if(st.size()){
        cout << "NO" << '\n';
    }
    else{
        cout << "YES" << '\n';
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