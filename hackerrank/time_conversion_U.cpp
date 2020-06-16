// start : pm 9:17
// end : --

// stoi() �Լ��� ������.
// setfill(), setw()�� ���� �տ� 0�ֱ�

// 12�ÿ� ���� ������ AM, PM���� ���� �����Ƿ� ����


#include <iostream>
#include <string>
#include <iomanip>		// setfill(), setw()

using namespace std;

string str;
int h;
int m;
int s;

void input() {
	cin >> str;
}

void divide_str() {
	string str_h = str.substr(0, 2);
	string str_m = str.substr(3, 5);
	string str_s = str.substr(6, 8);
	string type = str.substr(8, 10);

	h = stoi(str_h);
	m = stoi(str_m);
	s = stoi(str_s);

	if (type == "AM") {
		if (h == 12) h = 0;
	}
	else {
		if(h != 12) h += 12;
		else h = 12;
	}
}

void solve() {
	input();
	divide_str();
	
	cout << setfill('0') << setw(2) << h << ":";
	cout << setfill('0') << setw(2) << m << ":";
	cout << setfill('0') << setw(2) << s << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	solve();

	return 0;
}