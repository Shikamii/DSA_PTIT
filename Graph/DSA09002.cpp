#include<bits/stdc++.h>
#include<stack>
#include<queue>
using namespace std;

#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
const ll mod = 1e9+7;
const ll N = 1e6+8;

int n;
vector<pair<int, int>> edge;

void solve(){
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
        cout << it.first << " " << it.second << '\n';
    }
}
int main()
{
    faster();
    solve();
}