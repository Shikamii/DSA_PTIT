#include<bits/stdc++.h>

using namespace std;

int n, a[100], ok;
void ktao(){
    for(int i=1; i<=n; i++) a[i] = i;
}
void sinh(){
    int i = n-1;
    while(a[i]>a[i+1]) i--;
    if(i==0) ok = 0;
    else{
        int j = n;
        while(a[i]> a[j]) j--;
        swap(a[i], a[j]);
        reverse(a+i+1, a+n+1);
    }
}
void solve(){
    cin >> n;
    vector<string> v;
    ktao();
    ok = 1;
    while(ok){
        string tmp = "";
        for(int i=1; i<=n; i++){
            tmp += a[i]+'0';
            // cout << a[i];
        }
        //cout << tmp << '\n';
        v.push_back(tmp);
        sinh();
    }

    for(int i=v.size()-1; i>=0; i--){
        cout << v[i] << " ";
    }
    cout << '\n';
}
int main()
{
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}