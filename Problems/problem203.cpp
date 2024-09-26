#include <bits/stdc++.h>
using namespace std ;

bool check(int n) {
	int origin = n ;
	int result = 0;
	while ( n > 0 ) {
		int res = n % 10 ;
		result = result * 10 + res ;
		n /= 10 ;
	}
	return ( result == origin ) ;
}
int main() {
	int n ; cin >> n ;
	int a[n] ;
	for (int i = 0 ; i < n ; i++) cin >> a[i] ;
	for (int i = 0 ; i < n ; i++) {
		if (check(a[i])) cout << a[i];
	}
}