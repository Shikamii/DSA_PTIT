#include<bits/stdc++.h>
#include<stack>
#include<queue>
using namespace std;

#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
const ll mod = 1e9+7;
const ll N = 1e6+8;

/*
xâu hiện tại - 1 = xâu trước

1-1 = 0
0-1 = 1 nho 1
0000 => 1111
110100 => truoc 110011

111101 => truoc 111100

duyệt từ cuối về
gặp 0 thì thành 1
gặp 1 thì thành 0 r dừng luôn
*/
void solve(){
    string s;
    cin >> s;

    int i = s.length()-1;
    while(i>=0 && s[i]=='0'){
        s[i] = '1';
        i--;
    }
    if(i<0){
        cout << s << '\n';
    }
    else{
        s[i] = '0';
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