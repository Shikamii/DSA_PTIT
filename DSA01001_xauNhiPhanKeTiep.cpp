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
    int i = s.length()-1;
    int ok = 1;
    while(i>=0 && s[i]=='1'){
        s[i] = '0';
        i--;
    }
    if(i<0){
        for(char i : s) i = '0';
        cout << s << '\n';
    }
    else{
        s[i] = '1';
        cout << s << '\n';
    }
}
int main()
{
    faster();
    int t = 1;
    cin >> t;
    cin.ignore();
    while(t--){
        solve();
    }
}