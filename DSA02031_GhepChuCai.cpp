#include<bits/stdc++.h>

using namespace std;

int n; 
char c;
char X[100];  // tính bắt đầu từ 1 => n;
bool used[1000];
void input(){
    cin >> c;
    n = c - 'A' + 1;
}
// ktra la nguyen am
bool isvowel(char c){
    return c == 'A' || c == 'E';
}

bool check(){
    for(int i=2; i<=n-1; i++){
        if( !isvowel(X[i-1]) && !isvowel(X[i+1]) && isvowel(X[i])){
            return false;
        }    
    }
    return true;
}

void inkq(){
    for(int i=1; i<=n; i++){
        cout << X[i];
    }
    cout << '\n';
}
void Try(int i){
    for(char j = 'A'; j<=c; j++){
        if(used[j] == false){
            X[i] = j;
            used[j] = true;

            if(i == n){
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
    input();
    Try(1); 
}