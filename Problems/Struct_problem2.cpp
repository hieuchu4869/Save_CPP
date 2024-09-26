#include <bits/stdc++.h>
using namespace std ;
// tính tổng 2 phân số và rút gọn

long long  uocCHungLonNhat(long long a, long long b) {
	while (b) {
		long long t = a % b ;
		a = b ;
		b = t ;
	}
	return a;
}

struct PhanSo {
	int ts , ms ;
};

void nhap(PhanSo &p ) {
	cin >> p.ts >>  p.ms ;
}

void	rutgon(PhanSo &p) {
	int k = uocCHungLonNhat( p.ts , p.ms);
	p.ts /= k;
	p.ms /= k;
}
// vì tổng của 2 phân số thì return về 1 phân số nên ta trả về PhanSO
PhanSo tong( PhanSo a , PhanSo b ) {
	PhanSo res ;
	res.ms =	a.ms * b.ms ;
	res.ts =	a.ts * b.ms +	a.ms * b.ts ;
	rutgon(res);
	return res ;
}

void in(PhanSo p) {
	cout << p.ts << " " << p.ms ;
}


int main() {
	struct PhanSo p, q ;
	nhap(p);
	nhap(q);
	PhanSo t = tong(p, q);
	in(t);
}