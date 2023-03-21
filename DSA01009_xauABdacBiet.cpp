#include<bits/stdc++.h>
#include<stack>
#include<queue>
using namespace std;

#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
const ll mod = 1e9+7;
const ll N = 1e6+8;

int n, k, a[100], ok;

void ktao(){
    for(int i=1; i<=n; i++){
        a[i] = 0;
    }
}

void sinh(){
    int i=n;
    while(i>=1 && a[i]==1){
        a[i] = 0;
        i--;
    }
    if(i==0) ok = 0;
    else a[i] = 1;
}

bool check(int a[], int n, int k){
    int cnt = 0;
    for(int i=1; i<=n-k+1; i++){
        // if(a[i] == a[i+1] && a[i] == a[i+2] && a[i]==0){
        //     cnt++;
        // }
        int x = i;
        int ans = k-1;   
        /*
        một dãy kí tự k liên tiếp 
        => có k-1 cặp cần phải so sánh
        */
        while(ans){
            if(a[x]==a[x+1] && a[x] == 0) {
                ans--;
                x++;
            }
            else break;
        }
        if(ans==0) cnt++;
    }
    if(cnt==1) return true;   // tồn lại duy nhật một dãy k kí tự A liên tiếp
    else return false;
}
void solve(){
    cin >> n >> k;
    vector<string> v;
    int cnt = 0;
    ok = 1;
    ktao();
    while(ok){
        string res = "";
        if(check(a, n, k)){
            cnt++;
            for(int i=1; i<=n; i++){
                if(a[i]==0) res += "A";
                else res += "B";
            }
            v.push_back(res);
        }
        sinh();
    }
    cout << cnt << '\n';
    for(string i : v) cout << i << '\n';
}
int main()
{
    faster();
    int t = 1;
    //cin >> t;
    while(t--){
        solve();
    }
}