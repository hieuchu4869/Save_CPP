#include <bits/stdc++.h>
using namespace std ;

bool nguyenTo(int n) {
	for (int i = 2 ; i <= sqrt(n) ; i++) {
		if ( n % i == 0) return false ;
	}
	return true ;
}

int max_nguyenTo( int a[] , int n ) {
	int max = -1 ;
	for (int i = 0 ; i < n ; i++) {
		if (nguyenTo(a[i])) {
			if ( a[i] > max) max = a[i] ;
		}
	}
	return max ;
}
int main() {
	int n ; cin >> n;
	int a[n] ;
	for (int i = 0 ; i < n ; i++) cin >> a[i] ;
	int result = max_nguyenTo(a, n);
	cout << result ;
}