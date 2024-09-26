#include <bits/stdc++.h>
using namespace std ;

// điểm cân = của mảng
/// 1 2  / 2 1
int main() {
	int n ; cin >> n ;
	int a[n];
	for (int i = 0 ; i < n ; i++) cin >> a[i];
	int sum1 = 0 , sum2_left = 0 ;
	for (int i = 0 ; i < n ; i++) {
		sum1 += a[i];
	}
	for (int i = 0 ; i < n ; i++) {
		sum1 -= a[i]; // tổng phần tử bên phải
		if (sum1 == sum2_left) {
			cout << i << " " ;
		}
		sum2_left += a[i];
	}

}