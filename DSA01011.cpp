#include<bits/stdc++.h>

using namespace std;

void solve(){
    int x;
    cin >> x;
    string s;
    cin >> s;
    cout << x << " ";
    if(next_permutation(s.begin(), s.end())){
        cout << s << '\n';
    }
    else cout << "BIGGEST" << '\n';
}
int main()
{
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}