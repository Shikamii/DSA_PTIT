#include<bits/stdc++.h>

using namespace std;

int n, m;
int a[108][108];
int cnt = 0;
void input(){
    cin >> n >> m;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cin >> a[i][j];
        }
    }
}

void Try(int i, int j){
    if(i==n && j==m){
        cnt++;
        return;
    }

    if(i+1 <= n && a[i+1][j]){
        a[i+1][j] = 0;
        Try(i+1, j);
        a[i+1][j] = 1;
    }
    if(j+1 <= m && a[i][j+1]){
        a[i][j+1] = 0;
        Try(i, j+1);
        a[i][j+1] = 1;
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--){
        input();
        Try(1, 1);
        cout << cnt << '\n';
        memset(a, 0, sizeof(a));
        cnt = 0;
    }
}