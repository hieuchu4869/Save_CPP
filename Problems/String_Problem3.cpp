#include <bits/stdc++.h>
using namespace std ;

// cho 2 xâu kí tự và tìm các từ trong xâu 1 mà ko có trong xâu 2 và mỗi từ liệt kê 1 lần
// tạo hàm trả về các kí tự trong set
set<string> save_Xau( string s) {
	stringstream ss(s) ;
	set <string> se ;
	string tmp ;
	while ( ss >> tmp) {
		se.insert(tmp);
	}
	return se ;
}
int main() {
	string s1 , s2 ;
	getline(cin, s1);
	getline(cin, s2);
	set<string> se1 =	save_Xau(s1);
	set<string> se2 = save_Xau(s2);
	for ( int x : s1 ) {
		if ( se2.find(x) == se2.end()) {
			cout << x << " " ;
		}
	}
	return 0 ;
}

