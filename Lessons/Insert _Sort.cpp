#include <bits/stdc++.h>
using namespace std ;

void Insert_Sort(int a[], int n) {
	for (int i = 1 ; i < n ; i++) {
		// Lấy phần tử ở chỉ số i
		int x = a[i] , j = i - 1;
		while (j >= 0 && x < a[j]) { // duyệt từ phải sang trái
			a[j + 1] = a[j] ;
			--j ;
		}
		a[j + 1] = x ;
	}
}
int main() {
	int n ; cin >> n;
	int a[n] ;
	for (int i = 0 ; i < n ; i++) cin >> a[i];
	Insert_Sort(a, n);
	for (int i = 0 ; i < n ; i++) cout << a[i] ;
}