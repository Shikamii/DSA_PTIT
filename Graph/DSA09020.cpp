#include<bits/stdc++.h>
#include<stack>
#include<queue>
using namespace std;

#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
const ll mod = 1e9+7;
const ll N = 1e6+8;

// danh sach ke sang ma tran ke voi do thi vo huong
int a[1008][1008];
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    for(int i=1; i<=n; i++){
        string s;
        getline(cin, s);
        string num;
        stringstream ss(s);
        while(ss >> num){
            a[i][stoi(num)] = 1;
        }
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout << a[i][j] << " ";
        }
        cout << '\n';
    }
}