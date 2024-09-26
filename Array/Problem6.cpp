#include <bits/stdc++.h>
using namespace std ;

// hiệu lớn nhất của cặp phần tử sao cho phần tử lớn sau phần tử nhỏ
int main() {
	int n ; cin >> n ;
	vector<int> a(n);
	for (int i = 0 ; i < n ; i++) cin >> a[i];
	int min_value = a[0] , res = INT_MIN ;
	for (int i = 1 ; i < n ; i++) {
		// ta so sánh a[i] với a[0]
		if ( a[i] > min_value) {
			res = max(res, a[i] - min_value); // res = max(-1, a[i] - a[0]);
		}
		min_value = min(a[i] , min_value);
	}
	cout << res ;
}