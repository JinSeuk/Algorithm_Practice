// start : pm 9:01
// end : pm 9:15

// DP�� ���� ���ϴ� ����� ������ ������ ������ �����Ͽ� ���� �� �ִ�
// �� �������� �Ÿ��� ������ �������� �� ���� ���� �Ÿ��� ���̿� �������� ������ ���̴�.
// �ٸ� ���ܻ��׿� ���ؼ��� ó���ؾ��Ѵ�.
// 1. 1���� �����Ÿ��� 2���� �����Ÿ����� �۰ų� ������� ���� ���� ���� �� ����.

#include <iostream>

using namespace std;

bool result;

int s_1;
int s_2;
int j_1;
int j_2;

void input() {
	cin >> s_1 >> j_1 >> s_2 >> j_2;
}

void jump() {

	int j_diff = j_1 - j_2;
	int s_diff = s_2 - s_1;

	if (j_diff <= 0) {
		cout << "NO";
		return;
	}

	if (s_diff % j_diff) cout << "NO";
	else cout << "YES"; 
}

void solve() {
	input();

	jump();
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	solve();

	return 0;
}