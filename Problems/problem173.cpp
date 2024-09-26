#include <bits/stdc++.h>
using namespace std ;


int danhDau( map<int, int> mp , int a[], int n ) {
	for (int i = 0 ; i < n ; i++) {
		mp[a[i]]++ ;  // đếm cho mỗi phần tử
	}
	for (int i = 0 ; i < n ; i++) {
		if ( mp[a[i]] == 1 ) return a[i] ;
	}
	return -1 ;
}
int main() {
	int n ; cin >> n ;
	int a[n] ;
	map<int, int> mp ;
	for (int i = 0 ; i < n ; i++) {
		cin >> a[i] ;
	}
	int result = danhDau(mp, a, n) ;
	cout << result ;
}