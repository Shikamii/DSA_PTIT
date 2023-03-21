#include<bits/stdc++.h>

using namespace std;

int n, a[100], ok;

/*
H: 0
A: 1
*/
void ktao(){
    for(int i=1; i<=n; i++) a[i] = 0;
}

void sinh(){
    int i = n;
    while(i>=1 && a[i]==1){
        a[i] = 0;
        i--;
    }

    if(i==0){
        ok = 0;
    }
    else a[i] = 1;
}

bool check(int a[], int n){
    if(a[1]==0 && a[n]==1){
        int k=1;

        while(k<n){
            if(a[k]==a[k+1] && a[k]==0) return false;
            k++;
        }
        return true;
    }
    return false;
}


void solve(){
    cin >> n;
    ok = 1;
    ktao();
    vector<string> v;
    while(ok){
        if(check(a, n)){
            string tmp = "";
            for(int i=1; i<=n; i++){
                if(a[i]==0) tmp += "H";
                else tmp += "A";
            }
            v.push_back(tmp);
        }
        sinh();
    }
    sort(v.begin(), v.end());
    for(auto i : v) cout << i << '\n';
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}