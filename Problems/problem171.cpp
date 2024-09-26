#include <bits/stdc++.h>
using namespace std;

// Hàm để tính UCLN của hai số
int gcd(int a, int b) {
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

// Hàm để tính UCLN của tất cả các phần tử trong mảng
int gcd_array(const vector<int>& arr) {
	int result = arr[0];
	for (int i = 1; i < arr.size(); i++) {
		result = gcd(result, arr[i]);
		if (result == 1) break; // Nếu UCLN đã bằng 1, không cần tiếp tục vì 1 là UCLN nhỏ nhất có thể
	}
	return result;
}

int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) cin >> a[i];

	int kq = gcd_array(a);
	cout << kq;
}
