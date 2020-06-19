#include <bits/stdc++.h>
using namespace std;

int A, B;

void solve() {
	if (A==B) cout << "==" << endl;
	else if(A>B) cout << ">" << endl;
	else if(A<B) cout << "<" << endl;
	else cout << "error" << endl;
}

int main() {
	cin >> A >> B;

	solve();
}
