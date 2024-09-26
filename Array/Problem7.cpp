#include <bits/stdc++.h>
using namespace std ;
int main() {
	int n ; cin >> n ;
	int a[n];
	for (int i = 0 ; i < n ; i++) cin >> a[i];
	vector<int> vt(a , a + n); // cách sao chép mảng này phù hợp khi dùng hàm tính năng
	sort(vt.begin(), vt.end());
	for (int i = 0 ; i < n ; i++) {
		auto it = upper_bound(vt.begin(), vt.end(), a[i]);  //  upper_bound(first, last, value);
		if ( it == vt.end()) {
			cout << "no";
		}
		else cout << (*it) << " ";
	}
	cout << endl;
}