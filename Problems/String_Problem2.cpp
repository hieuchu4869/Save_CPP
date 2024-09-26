#include <bits/stdc++.h>
using namespace std ;
// đếm số lượng xâu con có K kí tự khác nhau
// k = 2
// a b c  not because ( a # b # c)
// a b a yes because ( a , b) and ( b , a ) and  ( a ,b , a)

void solve() {
	string s ;
	int k ;
	cin >> s >> k ;
	int ans = 0 ;
	for (int i = 0 ; i < s.length() ; i++) {
		int cnt[256] ;
		memset(cnt, 0 , sizeof(cnt)); // gán tất cả giá trị = 0 ;
		int dem = 0 ;
		for (int j = i ; j < s.length() ; j++) {
			if (cnt[s[j]] == 0) {
				++dem ;
			}
			if ( dem == k ) {
				++ans ;
			}
			if ( dem > k ) break ;
			cnt[s[j]] = 1; // đánh dấu
		}
	}
	cout << ans << endl ;
}

int main() {
	int test ; cin >> test ;
	while (test--) {
		solve();
	}
}


