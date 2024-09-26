#include <bits/stdc++.h>
using namespace std ;
// tìm xâu con nhỏ nhất của S1 chứa đầy đủ các kí tự S2

void solve() {
	int cnt1[256] = {0} , cnt2[256] = {0} ;
	string s1, s2;
	cin >> s1 >> s2 ;
	for (char x : s2) {
		cnt2[x]++;
	}
	int ans = INT_MAX, left = 0 ;
	int dem1 = 0 ;// đếm xâu con hiện tại có bn kí tự ở xâu 2 ;
	int index = -1 ;
	for (int  i = 0 ; i < s1.length() ; i++) {
		cnt1[s[i]]++;
		if (cnt1[s1[i]] < cnt2[s[i]]) {
			++dem1;
		}
		if (dem1 == s2.length()) {
			while (cnt1[s1[left]] >  cnt2[s1[left]] || cnt2[s2[left]] == 0 ) {
				if (cnt1[s1[left] > cnt2[s2[left]]]) {
					cnt1[s1[left]]--;
				}
				++left;
			}
			if (dem1 > i - left + 1) {
				dem1 = i - left + 1 ;
				index = left ;
			}
		}
	}
	if (index =  -1) {
		cout << "-1\n";
	}
	else {
		cout << s1.subtr(index, dem1) << endl;
	}
}
int main() {

}