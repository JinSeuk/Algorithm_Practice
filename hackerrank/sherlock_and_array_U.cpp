// start : pm 10:27
// end : pm 11 : 10

// DP�� Ǯ��
// ���ʺ��� SUM�� ��� �迭, �����ʺ��� SUM�� ��� �迭�� �غ��ϰ�
// n�� �������� n-1�� n+1�� ������ YES
// ��� ���ܿ� ���ؼ� ����ó��
// 1. �迭�� ���� ������ 0�ΰ�쿡 �ش�

#include <iostream>
#include <string>

using namespace std;

int N;
int *arr_vol;
int **arrs;

void input() {
	cin >> N;
	arrs = new int *[N];
	arr_vol = new int[N];

	int vol;
	for (int i = 0; i < N; i++) {
		cin >> vol;
		arr_vol[i] = vol;
		arrs[i] = new int[vol];
		for (int j = 0; j < vol; j++) {
			cin >> arrs[i][j];
		}
	}
}

void say(string str) {
	cout << str << endl;
}

void same_check(int line) {
	int vol = arr_vol[line];
	if (vol == 1) {
		say("YES");
		return;
	}

	int *l_start = new int[vol];
	int *r_start = new int[vol];

	int l_sum = 0;
	int r_sum = 0;
	for (int n = 0; n < vol; n++) {
		l_sum += arrs[line][n];
		r_sum += arrs[line][vol - 1 - n];

		l_start[n] = l_sum;
		r_start[vol - 1 - n] = r_sum;
	}

	if (l_start[vol - 2] == 0) {
		say("YES");
		return;
	}

	if (r_start[1] == 0) {
		say("YES");
		return;
	}

	if (vol < 3) {
		say("NO");
		return;
	}

	for (int i = 1; i < vol - 1; i++) {
		if (l_start[i - 1] == r_start[i + 1]) {
			say("YES");
			return;
		}
	}

	say("NO");

}

void solve() {
	input();
	for (int i = 0; i < N; i++) {
		same_check(i);
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	solve();

	return 0;
}