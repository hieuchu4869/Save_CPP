#include <bits/stdc++.h>
using namespace std ;
int cnt[100001];
int main() {
	memset(cnt, 0 , sizeof(cnt));
	int n ; cin >> n ;
	int a[n];
	map<int, int> mp ;
	for (int i = 0 ; i < n ; i++) {
		cin >> a[i];
		mp[a[i]]++;
	}
	int dem = 0 ;
	for (int i = 0 ; i < n ; i++) {
		if ( mp[a[i]] > 1) {
			++dem ;
		}
	}
	cout << dem ;

}