#include <bits/stdc++.h>
using namespace std ;

// int ucln(int a , int b) {
// 	while ( b != 0) {
// 		int r = a % b ;
// 		a = b ;
// 		b = r ;
// 	}
// 	return a ;
// }

int gcd(int a , int b) {
	if ( b == 0) return a;
	return gcd(b, a % b);
}
const int mang = 1000;
int a[mang];
void solve(vector<int> v , int n ) {
	int res = 1;
	for (int i = 0 ; i < n  ; i++) {
		for (int j = i + 1 ; j < n ; j++) {
			res = max(res, gcd(a[i], a[j]));
			// cout << uocChung;
		}
	}
	cout << res ;
}
int main() {
	int n ; cin >> n ;
	vector<int> v(n);
	for (int i = 0 ; i < n ; i++) cin >> v[i];
	solve(v, n);
}