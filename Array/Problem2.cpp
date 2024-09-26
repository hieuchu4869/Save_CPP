#include <bits/stdc++.h>
using namespace std ;
// tìm số nhỏ nhất không xuất hiện
int cnt[1000002];
int main() {
	int n ; cin >> n ;
	memset(cnt, 0, sizeof(cnt));
	map<int, int> mp ;
	for (int i = 0 ; i < n ; i++) {
		int x ; cin >> x;
		if ( x > 0) cnt[x] = 1 ;
	}
	for (int i = 1 ; i <= 1000001 ; i++) {
		if (cnt[i] == 0) {
			cout << i ;
			break;
		}
	}
}