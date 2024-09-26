#include <bits/stdc++.h>
using namespace std ;


bool check(int a[] , int n, int i) {
	if ( a[i] % 2 != 0) return false ;
	if ( i > 0 && a[i - 1] % 2 == 0) return true;
	if ( i < n - 1 && a[i + 1] % 2 == 0) return true ;
	return false ;
}
void solve(int a[] , int n) {
	for (int i = 0 ; i < n ; i++) {
		if (check(a, n, i)) {
			cout << a[i];
		}
	}
}


int main() {
	int n ; cin >> n ;
	int a[n]	 ;
	for (int i = 0 ; i < n ; i++) cin >> a[i] ;
	solve(a, n) ;
}