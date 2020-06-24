#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);

	int H, M;
	cin >> H >> M;

	if( H<0 || H>23 || M<0 || M>59) return 1;

	if (M >= 45) cout << H << " " << M-45;
	else {
		if (H==0) H = 23;
		else H--;
		cout << H << " " << M+15;
	}

	return 0;
}
