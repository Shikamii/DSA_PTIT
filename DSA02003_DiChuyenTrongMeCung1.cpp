#include<bits/stdc++.h>

using namespace std;

int n, a[100][100];
string s = "";
bool ok = false;
/*
Di xuong duoi : (i+1, j); tinh theo hang 
Di sang phai : (i, j+1): tinh theo cot

*/
void nhap(){
    cin >> n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin >> a[i][j];
        }
    }
}

void Try(int i, int j){
    if(i==n && j==n){
        ok = true;
        cout << s << " ";
        return;
    }

    if(i+1 <= n && a[i+1][j] == 1){
        s += "D";
        a[i+1][j] = 0;    // di qua r thi cho no = 0, de tranh di lai
        Try(i+1, j);

        s.pop_back();
        a[i+1][j] = 1;   // tra lai gia tri ban dau
    }

    if(j+1 <= n && a[i][j+1] == 1){
        s += "R";
        a[i][j+1] = 0;
        Try(i, j+1);
        s.pop_back();
        a[i][j+1] = 1;
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--){
        nhap();
        if(a[1][1] && a[n][n]){
            Try(1, 1);
            if(ok == false) cout << -1;
        }
        else cout << -1;
        cout << '\n';
        s = "";
        ok = false;
    }
}