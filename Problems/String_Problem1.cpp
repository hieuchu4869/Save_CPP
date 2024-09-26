#include <bits/stdc++.h>
using namespace std ;

void chuanHoa(string &str) {
	// xoa khoang trang tai dau
	while (str[0] == ' ') {
		str.erase(str.begin() + 0); // xoa ki tu tai vi tri 0
	}
	// xoa khoang trang tai cuoi
	while (str[str.length() - 1] ==  ' ') {
		str.erase(str.begin() + str.length() - 1);
	}
}

void chuanHoa2( string &vt ) {
	for (int i = 0 ; i < vt.length() ; i++) {
		if ( vt[i] == ' ' && vt[i + 1] == ' ') {
			vt.erase(vt.begin() + i) ;
			--i;
		}
	}
}

void vietHoa( string &s) {
	for (int i = 0 ; i < s.length() ; i++) {
		// chuyen sang in thuong
		s
	}
}
int main() {
	cout << " Nhap Chuoi : \n" ;
	string vt ;
	getline(cin, vt);
	cout << " Chuoi nhan duoc : " << vt << endl;
	chuanHoa2(vt);
	cout << vt ;
}
// cout << str ;
