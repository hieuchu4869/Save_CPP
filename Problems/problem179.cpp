#include <bits/stdc++.h>
using namespace std ;

int main() {
	int n ; cin >> n ;
	int a[n] ;
	for (int i = 0 ; i < n ; i++) cin >> a[i] ;
	for (int i = 1 ; i < n - 1 ; i++) {
		if (a[i] > abs(a[i] - 1) &&  a[i] < abs(a[i + 1])) {
			cout << a[i] ;
		}
	}
	return 0 ;
}