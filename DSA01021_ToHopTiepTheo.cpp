#include<bits/stdc++.h>
#include<stack>
#include<queue>
using namespace std;

#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
const ll mod = 1e9+7;
const ll N = 1e6+8;

/* Ý tưởng
đề bài yêu cầu là tổ hợp tiếp theo sẽ có bnh phần tử mới so với tổ hợp hiện tại

mà ta biết rằng tổ hợp tiếp theo phụ thuộc vào i tìm đƯợc
<xét vị trí tại i xem đã đạt max hay chưa>

so phần tử mới = k-i;
*/
int n, k, a[1000], dd[1000];
void solve(){
    cin >> n >> k;
    set<int> se;
    for(int i=1; i<=k; i++){
        cin >> a[i];
        se.insert(a[i]);
    }
    for(int i=1; i<=k; i++) dd[i] = a[i];

    int i=k; 
    while(i>=1 && a[i]==n-k+i){
        i--;
    }
    if(i==0){
        cout << k << '\n';
    }
    else{
        dd[i]++;
        for(int j=i+1; j<=k; j++){
            dd[j] = dd[j-1]+1;
        }
        //for(int i=1; i<=k; i++) cout << dd[i] << " ";
        for(int i=1; i<=k; i++){
            se.insert(dd[i]);
        }
        cout << se.size() - k;
        cout << '\n';
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