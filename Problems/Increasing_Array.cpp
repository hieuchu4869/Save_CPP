#include <bits/stdc++.h>
using namespace std ;


int main() {
	int n ; cin >> n	 ;
	vector<long long> vt(n) ;
	long long sum = 0 ;
	for (int i = 0 ; i < n ; i++) cin >> vt[i] ;
	for (int i = 1 ; i < n ; i++) {
		if ( vt[i] < vt[i - 1]) {
			long long k = abs(vt[i] - vt[i - 1]);
			sum += k ;
			vt[i] += k ;
		}
		// cout << a[i] ;
	}
	cout << sum ;
}