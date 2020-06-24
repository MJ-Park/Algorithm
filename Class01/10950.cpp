#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	int T;
	cin >> T;
	int *A = new int[T];
	int *B = new int[T];

	for (int i=0; i<T; i++)
		cin >> A[i] >> B[i];
	
	for (int i=0; i<T; i++)
		cout << A[i] + B[i] << '\n';

	delete[] A;
	delete[] B;

	return 0;
}
