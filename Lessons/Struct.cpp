#include <bits/stdc++.h>
using namespace std ;

struct SinhVien {
	string ten, msv, ngaysinh, quequan ;
	double gpa ;
	// tao ham in thong tin
	void in() {
		cout << ten << " " << msv << " " << ngaysinh << " " << quequan << " " << gpa << endl;
	}
	// tao ham nhap
	void nhap() {
		getline(cin, ten);
		cin >> msv >> ngaysinh ;
		getline(cin, quequan);
		cin >> gpa ;
	}

} ;

// tao ham xuat thong tin ben ngoai

void xuatThongTin(int sv) {
	cout << sv.ten << " " << sv.msv << " " << sv.ngaysinh << " " << sv.quequan << " " << sv.gpa << endl ;
}
// tao ham nhap thong tin dung pointer
void nhapThongTin(int &sv) {
	cin.ignore();
	getline(cin, ten);
	cin >> sv.msv >> sv.ngaysinh ;
	cin.ignore();
	getline(cin, quequan);
	cin >> sv.gpa;

}
int main() {
	SinhVien x ;
	getline(cin, x.ten); // truy cap thuoc tinh
	cin >> x.msv >> x.ngaysinh ; // nhap vao masv va ngay sinh
	scanf("\n");    // = cin.ignore();
	getline(cin, x.quequan);  // nhap que quan
	cin >> x.gpa ;
	// Truy cap ham in
	x.in();
	// Truy cap ham in ben ngoai
	xuatThongTin(x) ;
	// In thong tin kieu 3
	SinhVien int y = {"Suzune", "0002" , "09/4/3" , "Ha Noi" , 3.7};
	y.in();
	// goi ham nhap
	x.nhap();
	// goi ham nhap thong tin
	SinhVien z ;
	nhapThongTin(z);
}

