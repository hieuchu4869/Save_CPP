#include <bits/stdc++.h>
using namespace std ;

//
struct SinhVien {
	string ten , masv , ngaysinh , quequan ;
	double gpa ;
	//
	SinhVien(double diem) {
		ten = "Suzune";
		masv = "1100";
		ngaysinh = "4/4/4";
		quequan = "Ha Noi";
		gpa = 3.6 ;
	}
};

void xuatThongTin( SinhVien sv) {
	cout << sv.ten << sv.masv << sv.ngaysinh << sv.quequan << gpa ;
}
int main() {
	SinhVien sv(3.8) ; // Tìm constructor phù hợp nhất
	xuatThongTin(sv);
}