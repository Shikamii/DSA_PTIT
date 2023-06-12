#include <bits/stdc++.h>

using namespace std;
int n, s;
int a[105];
string ans;
void Try(int pos, int k)
{
    if (ans == "YES")
        return;
    if (2 * k == s)
    {
        ans = "YES";
        return;
    }
    // vị trí lấy để tạo thành dãy con từ 1 đến pos, pos < n, ko lấy dãy con có n phần tử
    if (pos < n) 
    {
        if (2 * (k + a[pos]) <= s)
            Try(pos + 1, k + a[pos]);
        Try(pos + 1, k);
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        s = 0;
        ans = "NO";
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            s += a[i];
        }
        if (s % 2 == 0)  // tổng của mảng phải là số chẵn thì mới chia ra được hai mảng con + lại = tổng
            Try(0, 0);
        cout << ans << endl;
    }
}