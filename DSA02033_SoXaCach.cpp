#include<bits/stdc++.h>

using namespace std;

int n, X[100];
bool used[100];

void inkq(){
    for(int i=1; i<=n; i++){
        cout << X[i];
    }
    cout << '\n';
}

bool check(){
    for(int i=2; i<=n; i++){
        if(abs(X[i]-X[i-1]) == 1)  return false;
    }
    return true;
}
void Try(int i){
    for(int j=1; j<=n; j++){
        if(used[j] == false){
            X[i] = j;
            used[j] = true;
            
            if(i==n){
                if(check()){
                    inkq();
                }
            }
            else{
                Try(i+1);
            }
            used[j] = false;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        Try(1);
    }
}