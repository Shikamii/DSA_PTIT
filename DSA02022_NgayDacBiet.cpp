#include<bits/stdc++.h>

using namespace std;

int X[10];
void inkq(){
    string s = "";
    for(int i=1; i<=8; i++){
        if(i == 3 || i == 5) s+="/";
        if(X[i] == 0){
            s += "0";
        }
        else s += "2";
    }
    cout << s;
    cout << '\n';
}
bool check(){
    if((X[1] == 0 && X[2] == 0) || (X[3] == 0 && X[4] == 0) || (X[3] == 1 && X[4] == 1)|| X[5] == 0 || X[4] == 0) return false;
    return true;
}
void Try(int i){
    for(int j=0; j<=1; j++){
        X[i] = j;
        if(i == 8){
            if(check()){
                inkq();
            }
        }
        else{
            Try(i+1);
        }
    }
}
int main()
{
    Try(1);
}   