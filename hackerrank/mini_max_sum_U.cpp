// start : pm 5:42
// end : pm 5:54
// ��� ���� ���� SUM�̶� �� �� �迭�� �ִ밪�� ���� SUM�� �ּҰ���, �ּҰ��� ���� SUM�� �ִ��̴�.
// vector-sort�� ����� ������������ �����Ͽ� ���� ���ߴ�.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long result_min;
long result_max;
long sum;

vector<long> vec;

void input() {
	long temp;
	for (int i = 0; i < 5; i++) {
		cin >> temp;
		sum += temp;
		vec.push_back(temp);
	}
}

void find_result() {
	sort(vec.begin(), vec.end());
	result_max = sum - vec.front();
	result_min = sum - vec.back();
}

void solve() {
	input();
	find_result();

	cout << result_min << " " << result_max;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	solve();
	return 0;
}