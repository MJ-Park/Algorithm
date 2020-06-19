#include <bits/stdc++.h>
using namespace std;

int H, M;

void solve() {
	if (M>=45) M-=45;
	else{
		M +=15;
		if (H==0) H=23;
		else H-=1;
	}
	cout << H << " " << M;
}

int main() {
	cin >> H >> M;
	if (H<0||H>23||M<0||M>59) return 1;

	solve();

	return 0;
}
