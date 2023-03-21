#include<bits/stdc++.h>
#include<stack>
#include<queue>
using namespace std;

#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
const ll mod = 1e9+7;
const ll N = 1e6+8;

int n, k, a[1000], ok, s[1000], dem[1000];
// mảng đếm là xét các dãy con k phần tử của dãy s
// sinh tổ hợp của dãy a => giá trị của phần tử a[i] chính là chỉ số của phần tử trong mảng s;
void ktao(){
    for(int i=1; i<=k; i++) a[i] = i;
}
void sinh(){
    int i=k; 
    while(i>=1 && a[i] == n-k+i) i--;
    if(i==0){
        ok = 0;
    }
    else{
        a[i]++;
        for(int j=i+1; j<=k; j++){
            a[j] = a[j-1]+1;
        }
    }
}

bool check(int a[], int n, int k){
    int cnt = 0;
    for(int i=1; i<=n-k+1; i++){
        int ans = k-1;
        int j = i;
        while(ans){
            if(a[j]<a[j+1]){
                ans--;
                j++;
            }
            else return false;
        }
        if(ans==0) cnt++;
    }
    if(cnt>=1) return true;
    else return false;
}

bool checkTang(int a[], int k){
    int l = 1;
    while(l<k){
        if(a[l]>a[l+1]) return false;
        l++;
    }
    return true;
}
void solve(){
    cin >> n >> k;
    for(int i=1; i<=n; i++) cin >> s[i];

    ktao();
    ok = 1;
    int cnt = 0;
    while(ok){
        for(int i=1; i<=k; i++){
            // cout << a[i] << " ";
            dem[i] = s[a[i]];
        }
        if(checkTang(dem, k)){
            cnt++;
            // for(int i=1; i<=k; i++) cout << dem[i] << " ";
            // cout << '\n';
        }
        sinh();  
    }
    cout << cnt << '\n';
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