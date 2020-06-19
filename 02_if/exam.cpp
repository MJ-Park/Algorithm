#include <bits/stdc++.h>
using namespace std;

int point;

void solve() {
	if (point > 100 || point < 0) cout << "error";
	else if(point >= 90) cout << "A";
	else if(point >= 80) cout << "B";
	else if(point >= 70) cout << "C";
	else if(point >= 60) cout << "D";
	else cout << "F";
}

int main() {
	cin >> point;
	solve();
}
