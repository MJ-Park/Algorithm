#include <iostream>
using namespace std;

int main() {
	int A,B;

	cin >> A >> B;

	if (A<-10000 || B>10000) return 1;

	if(A==B) cout << "==";
	else if(A>B) cout << ">";
	else cout << "<";

	return 0;
}
