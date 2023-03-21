#include<bits/stdc++.h>
#include<stack>
#include<queue>
using namespace std;

#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
const ll mod = 1e9+7;
const ll N = 1e6+8;

int a[N];
// ham sang so nguyen to
void sang(){
    for(int i=0; i<N; i++){
        a[i] = 1;
    }
    a[0] = a[1] = 0;
    for(int i=2; i<=sqrt(N); i++){
        if(a[i]){
            for(int j=i*i; j<=N; j+=i){
                a[j] = 0;
            }
        }
    }
}


void solve(){
    string s, t;
    cin >> s >> t;
    vector<int> danhdau(1e5, 0);

    queue<pair<string, int>> q;    // int luu so lan thay doi
    q.push({s, 0});

    while(q.size()){
        string x = q.front().first;
        int cnt = q.front().second;
        q.pop();   // nho lay ra r thi phai xoa luon

        if(x == t){   // dk dung
            cout << cnt << '\n';
            return;
        }
        // thay doi tung chu so cua s
        for(int i=0; i<4; i++){
            for(int j=0; j<=9; j++){
                if((i==0 && j==0)|| j == (x[i] - '0')){   //so dau tien ko the la 0 
                    continue;           // va neu j = dung i thi ko can thay doi gi het
                }
                string tmp = x;
                tmp[i] = j + '0';  // gan gia tri moi
                int num = stoi(tmp);
                if(a[num] && danhdau[num] == 0){
                    q.push({tmp, cnt+1});
                    danhdau[num] = 1;
                }
            }
        }
    }

}
int main()
{
    faster();
    int t;
    cin >> t;
    sang();
    // cin.ignore();
    while(t--){
        solve();
    }
}