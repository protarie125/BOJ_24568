#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int a, b;
	cin >> a >> b;

	cout << a * 8 + b * 3 - 28;

	return 0;
}