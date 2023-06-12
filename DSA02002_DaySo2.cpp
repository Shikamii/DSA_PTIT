#include<bits/stdc++.h>

using namespace std;

int n;
vector<int> a;
vector<int> b;
vector<vector<int>> res;

void input(){
    cin >> n;
    a.resize(n);  // phai co ham resize
    res.clear();
    for(int &i : a) cin >> i;
}

void Try(int i){
    //inkq();
    res.push_back(a);
    if(i==1) return;
    for(int j=0; j<i-1; j++){
        int tmp = a[j] + a[j+1];
        b.push_back(tmp);
    }
    a = b;
    a.resize(i-1);
    b.clear();
    Try(i-1);
}
void solve(){
    input();
    //for(int i : a) cout << i << " ";
    
    Try(n);
    reverse(res.begin(), res.end());
    for(auto i : res){
        cout << "[";
        for (int j = 0; j < i.size(); j++) {
            cout << i[j];
            if(j != i.size() - 1) cout << " ";
        }
        cout << "]";
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--){
        solve();
        cout << '\n';
    }
}