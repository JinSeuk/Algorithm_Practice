// start : pm 8:45 
// end : pm 8:59

// �Է¹޴� �κп��� �ٷ� ó���� ��� ���� �ذ��� ����
// 1. apple tree�� ��� ������ ������ �� �ְ� ���������� orange tree�� ����� ����

#include <iostream>

using namespace std;

int apple_cnt;
int orange_cnt;

int s;		// house's left
int t;		// house's right
int a;		// apple tree's location
int b;		// orange tree's location

int apple_vol;
int orange_vol;

int *apple_arr;
int *orange_arr;

void input() {
	cin >> s >> t >> a >> b;
	cin >> apple_vol >> orange_vol;

	apple_arr = new int[apple_vol];
	orange_arr = new int[orange_vol];

	int temp;
	for (int n = 0; n < apple_vol; n++) {
		cin >> temp;
		apple_arr[n] = a + temp;
	}
	for (int n = 0; n < orange_vol; n++) {
		cin >> temp;
		orange_arr[n] = b + temp;
	}
}

void gethering() {
	for (int n = 0; n < apple_vol; n++) {
		if (apple_arr[n] < s) continue;
		if (apple_arr[n] > t) continue;
		apple_cnt++;
	}

	for (int n = 0; n < orange_vol; n++) {
		if (orange_arr[n] < s) continue;
		if (orange_arr[n] > t) continue;
		orange_cnt++;
	}
}

void solve() {
	input();

	gethering();

	cout << apple_cnt << endl;
	cout << orange_cnt;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	solve();

	return 0;
}