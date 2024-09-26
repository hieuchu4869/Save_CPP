#include <bits/stdc++.h>
using namespace std ;
// mảng ko có số âm và max[i] = 10^7 ;
int cnt[1000001] = {0};
int k = INT_MIN ;

void Counting_Sort(int a[], int n) {
	for (int i = 0 ; i < n ; i++) {
		cin >> a[i] ;
		cnt[a[i]]++ ;
		k = max(k, a[i]) ; // tìm k lớn nhất trong mảng
	}
}

int main() {
	int n ; cin >> n ;
	int a[n] ;
	Counting_Sort(a, n) ;
	for (int i = 0 ; i <= k ; i++) { /// Duyệt từ nhỏ nhất tới lớn nhất
		if (cnt[i] != 0 ) {
			for (int j = 0 ; j < cnt[i] ; j++) {
				cout << i << "" ;
			}
		}
	}
	return 0 ;
}