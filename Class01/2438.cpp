#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	if (N<1 || N>100) return 1;

	for (int i=1; i<=N; i++) {
		for (int j=0; j<i; j++) cout << "*";
		cout << endl;
	}

	return 0;
}
