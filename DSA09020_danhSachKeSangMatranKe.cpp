#include<bits/stdc++.h>

using namespace std;

int n, m;
int a[1008][1008];
int main()
{
    cin >> n;
    cin.ignore();
    for(int i=1; i<=n; i++){
        string s; 
        getline(cin, s);
        string num;
        stringstream ss(s);
        while(ss >> num){
            a[i][stoi(num)] = 1;
            // chỗ này không cần a[stoi(num)][i] = 1 vì tí nữa khi duyệt đến đỉnh num thì tự nó sẽ đánh dấu các kề của nó
        }
    }

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout << a[i][j] << " ";
        }
        cout << '\n';
    }
}