#include <bits/stdc++.h>
using namespace std ;
/// nhập vào hàm struct cấu tạo của phân số
// rút gọn phân số
long long  uocCHungLonNhat(long long a, long long b) {
	while (b) {
		long long t = a % b ;
		a = b ;
		b = t ;
	}
	return a;
}
// tạo hàm struct phân số
struct PhanSo {
	long long ts , ms ;
};
// vì hàm nhập và hàm rút gọn có thay đổi nên ta phải dùng &p
void nhap(PhanSo &p) {
	cin >> p.ts >> p.ms ;
}

void rutgon(PhanSo &p) {
	long long k = uocCHungLonNhat(p.ts, p.ms);
	p.ts /= k ;
	p.ms /= k ;
}
void in(PhanSo p) {
	cout << p.ts << " " << p.ms << endl;
}
int main() {
	// gọi hàm struct có tham số là p
	struct PhanSo p ;
	nhap(p);
	rutgon(p);
	in(p);
}
