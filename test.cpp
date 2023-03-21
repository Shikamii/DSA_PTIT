#include<bits/stdc++.h>
#include<stack>
#include<queue>
using namespace std;

#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
const ll mod = 1e9+7;
const ll N = 1e6+8;


// Hàm chuyển đổi kí tự số sang số nguyên
int stoi(char c) {
    return (int)(c - '0');
}

// Hàm chuyển đổi số nguyên sang chuỗi
string itos(int n) {
    string s;
    while (n > 0) {
        s = (char)(n % 10 + '0') + s;
        n /= 10;
    }
    return s;
}

// Hàm giải mã chuỗi viết tắt
string decode(string input) {
    stack<char> s;
    string output = "";
    for (int i = 0; i < input.length(); i++) {
        if (input[i] == ']') {
            string str = "";
            while (s.top() != '[') {
                str = s.top() + str;
                s.pop();
            }
            s.pop(); // Xóa kí tự '[' khỏi stack
            //cout << str << '\n';

            if(isdigit(str[0])){
                int cnt = stoi(str[0]);
                //cout << cnt << '\n';
                while(cnt--){
                    s.push(str[1]);
                }
            }
            else{
                for(int i=0; i<str.length(); i++){
                    s.push(str[i]);
                }
            }
        }
        else {
            s.push(input[i]);
        }
    }
    while (!s.empty()) {
        output = s.top() + output;
        s.pop();
    }
    return output;
}


int main()
{
    string input = "AB[E[2C]D]";
    string output = decode(input);
    cout << "Input: " << input << endl;
    cout << "Output: " << output << endl;
    //decode(input);
    return 0;
}