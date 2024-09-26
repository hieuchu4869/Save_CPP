#include <bits/stdc++.h>
using namespace std ;

bool tachChuSo(int n) {
	while ( n > 0 ) {
		int save_word = n % 10 ;
		n /= 10 ;
		if (save_word % 2 == 0 ) return false ;
	}
	return true ;
}


int giaTriLonNhat( vetor<int> vt) {
	int max = vt[0] ; // cho max là phần tử đầu tiên
	for (int num : vt) {
		if (tachChuSo(num)) { // kiểm tra v[i] là toàn chữ số lẻ
			if ( num > max) {
				max  = num ;
			}
		}
	}
	return max ;
}


int main() {
	int  n ; cin >> n ;
	vector<int> vt(n);
	for (int i = 0 ; i < n ; i++) {
		cin >> vt[i];
	}
	int giatri = giaTriLonNhat(vt);
	cout << giatri ;
}

