#include <bits/stdc++.h>
#define ll long long ;
using namespace std ;

int res[1000001] = {0} ;

int main() {
	int n ; cin >> n ;
	int a[n - 1] ;
	for (int i = 0 ; i < n - 1 ; i++) {
		cin >> a[i];
		res[a[i]]++ ;
	}
	sort(a, a + n) ;
	for (int i = 1 ; i < 10000001 ; i++) {
		if ( res[i] == 0 ) {
			cout << i ;
			break ;
		}
	}
}