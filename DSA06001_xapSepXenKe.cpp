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
    deque<int> dq;
    
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a, a+n);
    for(int i : a) dq.push_back(i);
    while(dq.size()){
        cout << dq.back() << " ";
        dq.pop_back();
        if(dq.size()){
            cout << dq.front() << " ";
                dq.pop_front();
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