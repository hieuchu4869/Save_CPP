#include <bits/stdc++.h>
using namespace std ;

int solve(vector<int> a , int n) {
	int res = INT_MAX ;
	for (int i = 0 ; i < n ; i++) {
		for (int j = i + 1; j < n ; j++) {
			res = min(res, max(a[i], a[j]) - min(a[i], a[j]));
		}
	}
	return res ;
}
int main() {
	int n ; cin >> n;
	vector<int> a(n);
	for (int i = 0 ; i < n ; i++) cin >> a[i] ;
	int kq = solve(a, n);
	cout << kq ;
}