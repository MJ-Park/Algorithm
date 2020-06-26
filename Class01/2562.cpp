#include <bits/stdc++.h>
using namespace std;
#define MAX 100
#define MIN 0
int main() {
	ios::sync_with_stdio(false);
	int num[9], maxVal=-1,maxIdx;
	for (int i=0; i<9; i++) {
		cin >> num[i];
		if(num[i] > maxVal) {
			maxVal = num[i];
			maxIdx = i+1;
		}
	}

	cout << maxVal << '\n' << maxIdx;
}
