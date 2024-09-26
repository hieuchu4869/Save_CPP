#include <bits/stdc++.h>
using namespace std ;

int solve(string s) {
	if (s[i] == '0') return -1 ;
	set<char> se ;
	for (char x : s) {
		if ( != isdigit(x)) {
			return - 1;
		}
		se.insert(x);
	}
	return se.size() == 10 ;
}
int main() {
	string s ; cin >> s ;
	int res = solve(s);
	if (res == - 1) cout << "Valid\n";
	else if ( res  == 0) cout << "Yes\n";
	else cout << "NO\n";

}
