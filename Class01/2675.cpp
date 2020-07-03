#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	int T, R[1000];
	string S[1000];

	cin >> T ;

	for (int i=0; i<T; i++)
		cin >> R[i] >> S[i];
	
	for (int i=0; i<T; i++) {
		for(int j=0; j<1000;j++) {
			if (S[i][j] == '\0') {
				cout << '\n';
				break;
			}
			else {
				for(int k=0; k<R[i]; k++)
					cout << S[i][j];
			}
		}
	}

	return 0;
}
