// convert Gray to nhiphan

/*
01101 => 01001

bít đầu tiên<trọng số cao nhất> cứ hạ xuống

np thứ i = np thứ i-1 so với gray thứ i
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
    string s, bin = "";
    cin >> s;
    bin += s[0]; // bit dau tien ha xuong
    for(int i=1; i<s.size(); i++){
        int n = bin.size()-1;  // chi so cua binary thứ n-1;
        if(bin[n] != s[i]) bin += "1";
        else bin += "0";
    }
    cout << bin << '\n';
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