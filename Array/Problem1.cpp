#include <bits/stdc++.h>
using namespace std ;

// tìm chỉ số ko xuất hiện trong mảng
int main() {
	int n ; cin >> n ;
	map <long long, bool> mp;
	for (int i = 0 ; i < n ; i++) {
		long long x ; cin >> x;
		mp[x] = true ; // cnt[a[i]] = 1 ;
	}
	for (int i = 0 ; i < n ; i++) {
		if (mp[i] == true) cout << i << " " ;
		else cout << "-1" << " " ;
	}
	return 0 ;
}