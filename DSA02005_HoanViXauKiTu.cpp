#include<bits/stdc++.h>

using namespace std;

string s;
void solve(){
    cin >> s;
    do{
        cout << s << " ";
    }while(next_permutation(s.begin(), s.end()));
}
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        solve();
        cout << '\n';
    }
}