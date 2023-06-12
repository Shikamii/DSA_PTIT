#include<bits/stdc++.h>

using namespace std;
int n, k;   
string s;

int X[22]; // lưu cấu hình, tuỳ theo đk của k
set<string> se;
string ten[30];
void input(){
    cin >> n >> k;
    cin.ignore();
    for(int i=1; i<=n; i++){
        cin >> s;
        se.insert(s);
    }

    auto it = se.begin();
    for(int i=1; i<=se.size(); i++){
        ten[i] = *it;
        it++;
    }
}

// tổ hợp chập k của n
void in(){
    // for(auto it : se){
    //     cout << it << " ";
    // }
    // cout << '\n';
    // for(int i=1; i<=se.size(); i++){
    //     cout << ten[i] << " ";
    // }
    for(int i=1; i<=k; i++){
        cout << ten[X[i]] << " ";
    }
    cout << '\n';
}
void Try(int i){
    int N = se.size();
    for(int j=X[i-1] + 1; j<=N-k+i; j++){
        X[i] = j;
        if(i == k){
            in();
        }
        else{
            Try(i+1);
        }
    }
}
int main()
{
    input();
    Try(1);
}