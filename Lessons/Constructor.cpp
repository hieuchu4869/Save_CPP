#include <bits/stdc++.h>
using namespace std ;
/// Constructor : ko có kiểu trả về , tên hàm chính là tên struct
struct SinhVien {
	string ten , masv , ngaysinh , quequan , truong ;
	double gpa ;
	// Tao Contructor
	SinhVien() {
		masv = "001";
		ten = "Suzune";
		ngaysinh = "6/4/4";
		quequan = "Ha Noi";
		truong = "FPT";
		gpa = 3.5;
	}
};

void xuatThongTin(SinhVien sv) {
	cout << sv.ten << sv.masv << sv.ngaysinh << sv.quequan << sv.truong << sv.gpa ;
}
int main() {
	SinhVien x ;
	xuatThongTin(x);
}