#include <bits/stdc++.h>
using namespace std ;
int main() {
	int n , k ; cin >> n >> k ;
	int a[1001];
	for (int i = 0 ; i < n ; i++) cin >> a[i] ;
	long long sum = 0 ;
	for (int i = 0 ; i <= k ; i++) sum += a[i] ;
	long long res = sum , index = 0 ;
	for  (int i = k ; i < n ; i++) {
		sum = sum - a[i - k] + a[i] ;
		if ( sum > res) {
			res = sum ;
			index = i - k + 1 ;
		}
		cout << res << endl ; /// in ra tổng lớn nhất hiện tại
		for (int j = 0 ; j < k ; j++) {
			cout << a[index + j ] << " " ; // in ra tổng chuỗi con
		}
		cout << endl;
	}
	return 0 ;
}