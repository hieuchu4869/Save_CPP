#include <bits/stdc++.h>
using namespace std;

// Hàm tìm số lẻ nhỏ nhất trong mảng
int min_odd(vector<int>vt) {
	int odd_number = 1e6; // Khởi tạo giá trị lớn nhất
	for (int num : vt) {
		if (num % 2 != 0 && num < odd_number) {
			odd_number = num;
		}
	}
	return odd_number;
}

// Hàm tìm số chẵn lớn nhất nhỏ hơn giá trị odd_number
int max_even(int smallest_odd, vector<int> vt) {
	int largest_even = -1;
	for (int num : vt) {
		if (num % 2 == 0 && num > largest_even && num < smallest_odd) {
			largest_even = num;
		}
	}
	return largest_even;
}

int main() {
	int n;
	cin >> n;
	vector<int> vt(n);
	for (int i = 0; i < n; ++i) cin >> vt[i] ;
	int smallest_odd = min_odd(vt); // lưu số lẻ nhỏ nhất
	int result = max_even(smallest_odd, vt);
	cout << result << endl;
	return 0;
}
