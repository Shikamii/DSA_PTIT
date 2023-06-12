#include<bits/stdc++.h>

using namespace std;

int n;
string s = "";
bool check(){
    for(int i=1; i<=s.size()-1; i++){
        if( abs( (s[i]-'0') - (s[i-1]-'0')) == 1) return false;
    }
    return true;
}

void solve(){
    cin >> n;
    for(int i=1; i<=n; i++){
        s += i+'0';
    }
    do{
        if(check()){
            cout << s << '\n';
        }
    }while(next_permutation(s.begin(), s.end()));

    s = "";
}
int main()
{
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}