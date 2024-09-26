#include <bits/stdc++.h>
using namespace std ;
// 2 3 1 5 8 9 4

int main() {
	int n , k , x ; cin >> n >> k >> x ;
	int a[n] ;
	for (int i = 0 ; i < n ; i++) cin >> a[i];
	for (int i = n - 1 ; i >= k ; i--) {
		a[i + 1] = a[i]; //
	}
	a[k] = x ;
	++n;
	for (int i = 0 ; i < n ; i++) {
		cout << a[i]  ;
	}
}