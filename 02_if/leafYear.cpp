#include <bits/stdc++.h>
using namespace std;

int Year;

void solve() {
	if(Year < 0 || Year > 4000) cout << "error";
	else {
		if (Year%400 == 0) cout << 1;
		else if(Year%100 == 0) cout << 0;
		else if(Year%4 == 0) cout << 1;
		else cout << 0;
	}
}

int main() {
	cin >> Year;
	solve();
}
