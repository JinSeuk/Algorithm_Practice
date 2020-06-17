// start : pm 10:20
// end : pm 10:35
// cout Ư¡
// 1. �Ҽ��� ���� 6°�ڸ������� ǥ��(�ݿø�)
// 2. �Ҽ��� ���� �ǹ̾��� 0 ǥ�þ���

#include <iostream>

using namespace std;

double result[3];	// +, -, 0

int N;
int *num_arr;

void input() {
	cin >> N;
	num_arr = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> num_arr[i];
	}
}

void divide_section() {
	for (int i = 0; i < N; i++) {
		if (num_arr[i] == 0) {
			result[2] += 1;
		}
		else if (num_arr[i] > 0) {
			result[0] += 1;
		}
		else {
			result[1] += 1;
		}
	}
}

void solve() {
	input();

	divide_section();
	
	cout << result[0] / N << endl;
	cout << result[1] / N << endl;
	cout << result[2] / N << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	solve();
	return 0;
}