#include <bits/stdc++.h>
using namespace std ;

void solve(vector<int> a , int n , int k) {
	sort(a.begin(), a.end() , greater<int>());
	for (int i = k - 1 ; i >= 0 ; i--) {
		cout << a[i] ;
	}
}
int main() {
	int n, k ; cin >> n >> k ;
	vector<int> a(n) ;
	for (int i = 0 ; i < n ; i++) cin >> a[i] ;
	solve(a, n , k);
}