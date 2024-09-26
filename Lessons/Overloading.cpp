#include <bits/stdc++.h>
using namespace std ;

struct Sophuc {
	int thuc, ao ;
	// Nạp chồng có 1 tham số
	Sophuc operator + (const Sophuc other) {
		Sophuc res ;
		res.thuc = thuc + other.thuc ;
		res.ao = ao + other.ao ;
		return res ;
	}
	// Nạp chồng có 2 tham số
	friend Sophuc operator + (const Sophuc x , const Sophuc y ) {
		Sophuc tong  ;
		tong.thuc = x.thuc + y.thuc ;
		tong.ao = x.ao + y.ao ;
		return tong ;
	}

	// Nạp chồng toán tử insert
	friend istream& operator >> ( istream& in , Sophuc& x) {
		in >> x.thuc >> x.ao ;
		return in ;
	}
	//  Nạp chồng toán tử out
	friend ostream& operator << (ostream& out , Sophuc x ) {
		out << x.thuc << x.ao ;
	}

	// Nạp chồng boolean
	friend bool operator == (const Sophuc x , Sophuc y ) {
		return x.thuc == y.thuc && x.ao == y.ao ;
	}

};

// Nạp chồng cách 2

Sophuc operator + ( Sophuc a , Sophuc b) {
	Sophuc res ;
	res.thuc = a.thuc + b.thuc ;
	res.ao = a.ao + b.thuc ;
	return res ;
}
void in( Sophuc a) {
	cout << a.thuc << " + " << a.ao << "i" ;
}

// Lồng Struct

struct time {
	int gio , phut , giay ;
	time tg ;
};

struct ve {
	string ten ;
	time tg ;
};

int main() {
	Sophuc a{1, 2} , b{8, 9};
	Sophuc c = a + b ;
	in(c);

	// Sử dụng nạp chồng in và out
	Sophuc thuc , ao ;
	cin >> thuc >> ao ;
	cout << thuc >> ao ;

	// Sử dụng nạp chồng boolean
	if ( thuc == ao ) cout << "Yes";
	else cout << "no";

	// Sử dụng  lồng struct
	ve a ;
	getline(a.ten);
	cin >> a.tg.gio >> a.tg.phut >> a.tg.giay ;
}