#include <bits/stdc++.h>
using namespace std ;
nhap a # -
int main() {
	int n ; cin >> n ;
	vector<int> a(n);
	int max_value = INT_MIN , dem = 0 ;
	for (int i = 0 ; i < n ; i++)	cin >> a[i] ;
	for (int i = n - 1 ; i >= 0 ; i--) {
		if ( a[i] > a[i - 1]) {
			++dem;
		}
	}
	cout << dem ;
}
