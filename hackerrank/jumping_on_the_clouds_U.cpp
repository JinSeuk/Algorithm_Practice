// cloud�� 1, 2ĭ�� ������ �� ����.
// ������ ������ 1(����)�� �ƴϸ� ������ ������ ���̽�
// dfs �ùķ��̼����� ����

#include <iostream>

using namespace std;

int result = 1000000000;

int N;
int *clouds;

void input() {
	cin >> N;
	clouds = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> clouds[i];
	}
}

void jump(int step, int cnt) {
	if (step == N - 1) {
		// ������ ������ ������ �ּҰ� ���� update
		if (result > cnt) result = cnt;
		return;
	}
	else if (step >= N) {
		// ������ �Ѿ�� �ȵ�
		return;
	}

	// ���� �����ϸ� ������
	if (clouds[step] == 1) return;

	// ���� ����
	cnt++;

	// �ΰ��� ���̽��� ���� ���
	jump(step + 2, cnt);
	jump(step + 1, cnt);
}

void solve() {
	input();
	jump(0, 0);
	cout << result;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	solve();
	return 0;
}