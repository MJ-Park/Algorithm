#include <bits/stdc++.h>
using namespace std;

int A,B;

int main() {
	cin >> A >> B;

	if (A<=0 || B>=10) return 1;

	cout << A - B;

	return 0;
}
