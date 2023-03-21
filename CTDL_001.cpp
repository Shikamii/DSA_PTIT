#include<bits/stdc++.h>
#include<stack>
#include<queue>
using namespace std;

#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
const ll mod = 1e9+7;
const ll N = 1e6+8;

/*tu tuong
cau hinh sau = cau hinh trc + 1
cau hinh dau tien la full 0
1+0 = 0+1 = 1
0+0= 0
1+1 = 0 nho 1
di tim bit dau tien khac 0, va cho bit day len 1
neu gap bit 1 thi chuyen bit do ve 0;
*/
int a[100], n, ok;
void ktao(){
    for(int i=1; i<=n; i++){
        a[i] = 0;
    }
}
void sinh(){
    int i = n;
    while(i>0 && a[i]==1){
        a[i] = 0;
        i--;
    }
    if(i!=0){
        a[i] = 1;
    }else{
        ok = 0;
    }
}

bool check(int a[]){
    int l = 1; 
    int r = n;
    while(l<=r){
        if(a[l] != a[r]) return false;
        else l++, r--;
    }
    return true;
}
void solve(){
    cin >> n;
    ok = 1;
    while(ok){
        if(check(a)){
            for(int i=1; i<=n; i++){
                cout << a[i] << " ";
            }
            cout << '\n';
        }
        sinh();
    }

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