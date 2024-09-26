#include <bits/stdc++.h>
using namespace std ;

int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n);
	int max_value = INT_MIN;
	int index = -1;
	for (int i = 0; i < n; i++) {
		if (a[i] > max_value) {
			max_value = a[i];
			index = i;
		}
		// else max_value = 0 ;
	}
	cout << max_value << " " << index ;
	return 0;
}
