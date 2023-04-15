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
    int a[n];
    for(int &i : a) cin >> i;
    // int a[4] = {4, 5, 2, 25};
    
    stack<int> st;
    st.push(a[0]);
    for(int i=1; i<n; i++){
        if(a[i] <= st.top()){
            st.push(a[i]);
        }
        else{
            while(a[i] > st.top() && st.size()){
                cout << a[i] << " ";
                st.pop();
            }
            st.push(a[i]);
        }
    }
    // while(st.size()){
    //     cout << -1 << " ";
    //     st.pop();
    // }
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