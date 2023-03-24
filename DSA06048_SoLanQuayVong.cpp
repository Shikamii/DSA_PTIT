#include<bits/stdc++.h>
#include<stack>
#include<queue>
using namespace std;

#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
const ll mod = 1e9+7;
const ll N = 1e6+8;

/*
lan 1 = 51234
lan 2 = 45123
lan 3 = 34512
lan 4 = 23451
lan 5 = 12345

quay n lần thì quay về vị trí ban đầu
lan 1 = index của phần từ đầu tiên trong dãy ban đầu = n; index hien tai = 1
lan 2 = ixdex của phần tử đầu tiên trong dãy ban đầu = n-1; index hien tai = 1;
lan 3 = index của phần tử đầu tiên trong dãy ban đầu = n-2; index hiện tại = 1;

lan = n-(vị trí ban đầu) + 1;
*/

int bs(int a[], int n, int x){
    int l=0, r = n-1;
    while(l<=r){
        int mid = (l+r)/2;
        if(a[mid]==x){
            return mid;
        }
        else if(a[mid] < x){
            l = mid+1;
        }
        else{
            r = mid-1;
        }
    }
    return 0;
}
void solve(){
    int n;
    cin >> n;
    int a[n];
    for(int &i : a) cin >> i;
    if(is_sorted(a, a+n)){
        cout << 0 << '\n';
        return;
    }
    else{
        int val = a[0];
        sort(a, a+n);
        int idxBanDau = bs(a, n, val) + 1;
        //cout << idxBanDau << '\n';
        cout << n - idxBanDau + 1 << '\n';
    }
}
int main()
{
    faster();
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}
