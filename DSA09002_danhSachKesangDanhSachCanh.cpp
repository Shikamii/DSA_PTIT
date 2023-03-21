#include<bits/stdc++.h>

using namespace std;

int n, m;
int a[1008][1008];   // luu ma tran tre
vector<int> adj[1008];   // luu danh sach ke
vector<pair<int, int>> edge;   // luu danh sach canh

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
            if(stoi(num) > i){
                edge.push_back({i, stoi(num)});
            }
        }
    }

    for(auto it : edge){
        cout << it.first << " " << it.second;
        cout << '\n';
    }
}