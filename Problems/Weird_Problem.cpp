#include <bits/stdc++.h>
using namespace std ;


int main() {
	long long n ; cin >> n ;
	// int even = 0 , odd = 0 ;
	cout << n << " " ;
	while (n >= 2 ) {
		if ( n % 2 == 0 ) {
			n /= 2 ;
			cout << n << " " ;
		}
		else {
			n = n * 3 + 1;
			cout << n << " " ;
		}
	}
	// cout << n ;
}