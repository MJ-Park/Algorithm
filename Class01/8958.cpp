#include <iostream>
#include <string>

using namespace std;

int main() {
	int N, score[1000], contIdx=0;
	string s[1000];

	cin >> N;
	cin.ignore(32767,'\n');

	for (int i=0; i<N; i++) {
		getline(cin, s[i]);

		score[i] = 0, contIdx = 0;
		for (int j=0; j<80; j++) {
			if (s[i][j] == '\0') break;
			else if(s[i][j] == 'O') {
				contIdx++;
				score[i] += contIdx;
			}
			else if(s[i][j] == 'X') {
				contIdx = 0;
			}
		}
	}

	for (int i=0; i<N; i++) cout << score[i] << '\n';

	return 0;
}
