#include <bits/stdc++.h>
using namespace std ;

bool check(int n ) {
	int tmp = ( n / 10 ) % 10 ;
	return (tmp == 5) ;
}
int main() {
	int n ; cin >> n ;
	int a[n] ;
	int sum = 0 ;
	for (int i = 0 ; i < n ; i++) cin >> a[i]  ;
	for (int i = 0 ; i < n ; i++) {
		if (check(a[i])) {
			sum += a[i] ;
		}
	}
	cout << sum ;
}