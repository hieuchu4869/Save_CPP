#include <bits/stdc++.h>
using namespace std ;

// tìm số có tần suất lẻ trong mảng
void solve(int a[] , int n) {
	map<int, int> mp ;
	for (int i = 0 ; i < n ; i++) {
		mp[a[i]]++;
	}
	for (auto pair : mp) {
		if ( pair.first % 2 != 0) {
			cout << pair.first << " " <<  pair.second;
		}
	}
}
int main() {
	int n ; cin >> n ;
	int a[n] ;
	for (int i = 0 ; i < n ; i++) {
		cin >> a[i];
	}
	solve(a , n) ;
}