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
    s = " " + s;
    int i=s.size()-2;
    while(s[i]+'0' >= s[i+1]+'0') i--;   
    if(i==0){
        cout << " BIGGEST" << '\n';
    }
    else{
        int j = s.size()-1;
        while(s[i] >= s[j]) j--;
        //swap(s[i], s[j]);
        //cout << s[i] << " " << s[j] << '\n';
        char tmp = s[i];
        s[i] = s[j];
        s[j] = tmp;
        //cout << s[i] << " " << s[j] << '\n';
        int l = i+2, r = s.size()-1;
        while(l<r){
            char tmp = s[i];
            s[i] = s[j];
            s[j] = tmp;
            l++, r--;
        }
        cout << s << '\n';
    }
}
int main()
{
    faster();
    int t = 1;
    cin >> t;
    int x;
    for(int i=1; i<=t; i++){
        cin >> x;
        //cout << x;
        solve();
    }
}