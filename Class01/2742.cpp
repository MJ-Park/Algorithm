#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	int N;
	cin >> N;
	if (N<1 || N>100000) return 1;

	for (int i=N; i>0; i--) cout << i << '\n';

	return 0;
}
