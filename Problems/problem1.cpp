#include <bits/stdc++.h>
using namespace std ;

int main() {
	int a , b ; cin >> a >> b ;
	int late_brothers = 6 - a - b ;
	if ( a != b && a >= 1 && b <= 3) {
		cout << late_brothers ;
	}
}