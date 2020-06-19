#include <bits/stdc++.h>
using namespace std;

int x, y;

void solve() {
	if(x>0) {
		if(y>0) cout<<1;
		else cout<<4;
	}
	else {
		if(y>0) cout<<2;
		else cout<<3;
	}
}

int main() {
	cin >> x >> y;

	if(x<-1000 || x>1000 || y<-1000 || y>1000) return 1;
	else if(x==0 || y==0) return 1;
	solve();

	return 0;
}
