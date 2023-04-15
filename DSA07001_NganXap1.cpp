#include<bits/stdc++.h>
#include<stack>
#include<queue>
using namespace std;

#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
const ll mod = 1e9+7;
const ll N = 1e6+8;

void solve(){
    stack<int> st;
    string s;
    int a;
    while(cin >> s){
        if(s == "push"){
            cin >> a;
            st.push(a);
        }
        else if(s == "pop"){
            st.pop();
        }
        else{
            vector<int> v;
            if(st.size()){
                while(st.size()){
                    v.push_back(st.top());  // them vao dau  vector thi cuoi stack
                    st.pop();
                }
                for(int i=v.size()-1; i>=0; i--){
                    cout << v[i] << " ";
                    st.push(v[i]);
                }
                cout << '\n';
            }
            else{
                cout << "empty" << '\n';
            }
            
        }

    }
}
int main()
{
    faster();
    int t = 1;
    //cin >> t;
    while(t--){
        solve();
    }
}