#include <iostream>
using namespace std;

int flipNum(int num) {
	int res = 0;

	for (int i=100; i>0; i=i/10) {
		res += (num/i) * (100/i) ;
		num -= (num/i) * i;
	}

	return res;
}

int main() {
	ios::sync_with_stdio(false);
	int A,B;

	cin >> A >> B;
	
	A = flipNum(A);
	B = flipNum(B);

	if (A>B) cout << A;
	else cout << B;
	return 0;
}

