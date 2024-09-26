#include <bits/stdc++.h>
using namespace std ;

// chèn phần tử
int main() {
	int n , k ; cin >> n >> k ;
	int a[n] ;
	for (int i = 0 ; i < n ; i++ ) cin >> a[i] ;
	for (int i = k ; i < n - 1 ; i++) {
		a[i] = a[i + 1];
	}
	--n ;
	for (int i = 0 ; i < n ; i++) cout << a[i] ;
}