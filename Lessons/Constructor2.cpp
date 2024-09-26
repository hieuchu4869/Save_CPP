#include <bits/stdc++.h>
using namespace std ;

struct SinhVien {
	string ten , masv , ngaysinh , quequan , truong ;
	double gpa ;
	// Tao constructor 2 ;
	SinhVien(string name, string code , string dateBirth , string home , string study , double diem) {
		ten = name ;
		masv = ma ;
		ngaysinh = dateBirth ;
		quequan = home ;
		truong = study ;
		gpa = diem ;

	}
};

void xuatThongTin(SinhVien sv) {
	cout << sv.ten << " " << sv.masv << " " << sv.ngaysinh << " " << sv.quequan  << " " << sv.truong << sv.gpa << endl ;
}
int main() {
	SinhVien sv("Suzune", "195199", "4/4/4" , "Ha Noi", "FPT", 3.6); // truyen thong tin cho costructor
	xuatThongTin(sv) ;
}