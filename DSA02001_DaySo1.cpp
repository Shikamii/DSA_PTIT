#include<bits/stdc++.h>

using namespace std;

int n;
vector<int> a;
vector<int> b;

void input(){
    cin >> n;
    a.resize(n);  // phai co ham resize
    for(int &i : a) cin >> i;
}
void inkq(){
    cout << "[";
    for (int i = 0; i < a.size(); ++i) {
        cout << a[i];
        if (i != a.size() - 1) cout << " ";
    }
    cout << "]" << endl;
}
void Try(int i){
    inkq();
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
}
int main()
{
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}