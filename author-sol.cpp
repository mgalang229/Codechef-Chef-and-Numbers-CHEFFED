#include <bits/stdc++.h>

using namespace std;

int Sum(int n) {
	return (n % 10 + (n >= 10 ? Sum(n / 10) : 0));
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	int cnt = 0;
	// view the image in this repository for better understanding
	// S(x) <= 81 and S(S(x)) <= 16
	// x + S(x) + S(S(x)) = N
	// x + 81 + 16 = N
	// x + 97 = N
	// x = N - 97
	for (int i = max(0, n - 97); i <= n; i++) {
		if (i + Sum(i) + Sum(Sum(i)) == n) {
			cnt++;
		}
	}
	cout << cnt << '\n';
	return 0;
}
