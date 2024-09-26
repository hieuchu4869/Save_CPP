#include <bits/stdc++.h>
using namespace std ;

bool check(int a[] , int n , int x) {
	int left = 0 , right = n - 1 ;
	while (left <= right) {
		int mid = (left + right) / 2;
		if ( mid == x) return true ;
		else if (mid < x) left = middle + 1;
		else right = middle - 1;
	}
	return false ;
}
int main() {
	int n , x ; cin >> n >> x;
	int a[n] ;
	for (int i = 0 ; i < n ; i++) cin >> a[i];
	if (solve(a, n , x)) {
		cout << "Yes";
	}
	else cout <<  "no";
}