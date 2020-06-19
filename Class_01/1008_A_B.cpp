#include <bits/stdc++.h>
using namespace std;

int A,B;

void solve() {
	cout<<(double)A/B;	
}

int main() {
	// cout.precision -> 출력 자리수 설정
	cout.precision(10);
	
	cin >> A >> B;
	if (A<=0 || B>=10) return 1;
	solve();

	return 0;
}
