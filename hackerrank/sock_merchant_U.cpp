// int�� ����� ��� 1�� ����
// ���ĵ� �迭���� 1���� ��ȸ�� ����� ���� �� ����
// priority queue ���

#include <iostream>
#include <queue>

using namespace std;

int result;
int N;				// the number of sock.
priority_queue<int> sock_queue;

void input() {
	cin >> N;

	int temp;
	for (int i = 0; i < N; i++) {
		cin >> temp;
		sock_queue.push(temp);
	}
}

void match_pair() {
	int temp = -1;
	while (!sock_queue.empty()) {
		if (temp != sock_queue.top()) {
			// diffrent with before sock
			temp = sock_queue.top();
		}
		else {
			result++;
			temp = -1;
		}

		sock_queue.pop();
	}
}

void solve() {
	input();
	match_pair();
	cout << result;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	solve();
	return 0;
}