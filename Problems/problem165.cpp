#include <bits/stdc++.h>
using namespace std ;

//Hãy tìm giá trị đầu tiên trong mảng một chiều các số nguyên có chữ số
//đầu tiên là chữ số lẻ (dauledautien). Nếu trong mảng không tồn tại giá
//trị như vậy thì hàm sẽ trả về giá trị 0.

int solve(int n) {
	while ( n > 10) {
		n /= 10 ;  // take the first number of n
	}
	return (n % 2 == 1); // check if the first number is odd
}

int findValue(const vector<int>& arr) {
	for (int num : arr) {
		if (solve(num)) {
			return num ; //  Trả về số đầu tiên thỏa mãn điều kiện
		}
	}
	return 0 ; // there is not any value
}
int main() {
	int n ; cin >> n ;
	vector<int> a(n) ;
	for (int i = 0 ; i < n ; i++) cin >> a[i] ;
	int result = findValue(a);
	cout << result ;
	return 0 ;
}