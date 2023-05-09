#include<bits/stdc++.h>

using namespace std;

int n, a[100], ok, cnt;
// cnt: luu so luong so hang co trong tong
void ktao(){
    cnt = 1;
    a[1] = n;
}
void sinh(){
    int i = cnt;  // bat dau tu thang cuoi cung cua tong
    while(i>=0 && a[i]==1){
        i--;
    }
    if(i==0){
        ok = 0;
    }
    else{
        a[i]--;   // tim duoc tk khac 1
        int tmp = cnt - i + 1;  // phan bu
        cnt = i;   // reset lai cnt;

        // bieu dien phan bu qua a[i]
        int q = tmp/a[i];
        int r = tmp%a[i];

        if(q){
            for(int j=1; j<=q; j++){
                a[++cnt] = a[i];
            }
        }
        if(r){
            a[++cnt] = r;
        }
    }
}
void solve(){
    cin >> n;
    ktao();
    ok = 1;
    while(ok){
        cout << "(";
        for(int i=1; i<cnt; i++){
            cout << a[i] << " ";
        }
        cout << a[cnt];
        cout << ") ";
        sinh();
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