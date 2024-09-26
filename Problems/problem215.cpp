#include <bits/stdc++.h>
using namespace std ;

int main() {
	int n ; cin >> n ;
	int a[n]	 ;
	int sum = 0 ,  k = 0 ;
	for (int i = 0 ; i < n; i++) cin >> a[i];
	for (int i = 0 ; i < n - 1 ; i++) {
		k = abs(a[i + 1] - a[i]);
		sum += k ;
	}
	//Trung bình của tổng các khoảng cách, chia cho (n-1)
	int avg = sum / ( n - 1) ;
	cout << avg ;
}