#include <bits/stdc++.h>
using namespace std ;

// kiem tra là dãy tăng chặt
// in put :29-T1 123.79
bool check1(string s) {
	for (int i = 0 ; i < 4 ; i++) {
		if ( s[i] >= s[i + 1])
			return false ;
	}
	return true ;
}
// kiem tra cac chu so deu = nhau
// in put :29-T1 555.55
bool check2(string s) {
	for (int i = 1 ; i < 5 ; i++) {
		if ( s[i] != s[0])
			return false ;
	}
	return true ;
}

// in put :29-T1 222.33
bool check3(string s) {
	return (s[0] == s[1] && s[1] == s[2]) && (s[3] == s[4]);
}

// in put :29-T1 686.88
bool check4(string s) {
	for (char x : s) {
		if ( x != '6' && x != '8')
			return false ;
	}
	return true ;
}


int main() {
	int test ; cin >> test ;
	while (test--) {
		string s ;
		cin >> s ;
		// cắt 6 kí tự từ vị trí số 5
		string tmp = s.substr(5, 6);
		// xóa ki 1 tự tại vị trí 3
		tmp.erase(3, 1);
		if (check1(tmp) || check2(tmp) || check3(tmp) || check4(tmp)) {
			cout << "yes\n" ;
		}
		else cout << "No\n";
	}
	return 0 ;
}