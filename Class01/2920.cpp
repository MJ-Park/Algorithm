#include <iostream>
using namespace std;

int main() {
	int input[8];
	int idx = 0;
	for (int i=0; i<8; i++)
		cin >> input[i];
	
	if (input[0] == 1) {
		while(1) {
			idx += 1;

			if(idx >= 8) {
				cout << "ascending";
				break;
			}
			else if (input[idx] - input[idx-1] != 1) {
				cout << "mixed";
				break;
			}
		}
	}
	else if(input[0] == 8) {
		while(1) {
			idx += 1;

			if(idx >= 8) {
				cout << "descending";
				break;
			}
			else if (input[idx] - input[idx-1] != -1) {
				cout << "mixed";
				break;
			}
		}
	}
	else cout << "mixed";

	return 0;
}
