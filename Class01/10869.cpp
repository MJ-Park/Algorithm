#include <iostream>
using namespace std;

int main() {
	int A,B;
	
	cin >> A >> B;

	if(A<1 || B>10000) return 1;

	cout << A+B << endl
		<< A-B << endl
		<< A*B << endl
		<< A/B << endl
		<< A%B << endl;

	return 0;
}
