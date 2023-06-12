#include<bits/stdc++.h>

using namespace std;

#define ll long long

ll a[100008];

int binary_search(ll a[], ll n, ll x){
	ll l = 0;
	ll r = n;
	while(l<=r){
		ll mid = (l+r)/2;
		if(a[mid] == x) return mid;
		else if(a[mid] < x) l = mid+1;
		else r = mid-1;
	}
	return -1;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		ll n, k;
		cin >> n >> k;
		for(int i=1; i<=n; i++){
			cin >> a[i];
		}
		ll sum[n+1] = {0}; // chỉ số chạy tử 0->n;
		for(int i=1; i<=n; i++){   // sum[i] lưu tổng của các phần tử a[1] -> a[i];
			sum[i] = sum[i-1] + a[i];
		}

		// for(int i=1; i<=n; i++) cout << a[i] << " ";
		// cout << '\n';
		// for(int i=1; i<=n; i++) cout << sum[i] << " ";
		// cout << '\n';
		int ok = 0;
		for(int i=1; i<=n; i++){
			ll res = binary_search(sum, i, sum[i] - k);
			// nếu có sẽ tồn tại dãy con từ res + 1 // do mảng sum tính từ 0, còn mảng ban đầu tính từ 1;
			//cout << res << " ";
			
		/*
			i = 4; res = 1;
			sum[4] - k = sum[1];   tổng 1;  a[1];
							sum 4: tổng từ 1->4; a[1] + a[2] + a[3] + a[4];
										dãy con từ res + 1 => 4; đây là dãy con liên tiếp có tổng bằg k
							sum4- sum1: tổng từ 2->4;	
			dãy con từ 2->4;
		*/
			if(res != -1){
				ok = 1;
				for(int j = res+1; j<=i; j++){
					cout << a[j] << " ";
				}
				cout << '\n';
				break;
			}
		}
		if(ok==0) cout << "NOT FOUND" << '\n';
	}
}