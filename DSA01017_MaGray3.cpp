// convert nhi phan to Gray


/*
01001 => 01101

bit dau tien<trọng số lớn nhất> cứ hạ xuống
bít thứ 2 của gray = bit 1 của np so với bit 2 cua np

tức là bit thứ i của gray = bit thứ i-1 của np so với bít thứ i của np

*/

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
    for(int i=0; i<s.size(); i++){
        if(i==0) cout << s[i];
        else{
            if(s[i] != s[i-1]) cout << 1;
            else cout << 0;
        }
    }
    cout << '\n';
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