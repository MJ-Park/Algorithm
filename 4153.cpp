#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	double num[3], maxNum, smallNum;

	while(1) {
		cin >> num[0] >> num[1] >> num[2];
		if ((num[0]+num[1]+num[2]) == 0) break;
		maxNum = 0;
		smallNum = 0;
		for (int i=0; i<2; i++)
			maxNum = max(num[i],num[i+1]);
		for (int i=0; i<2; i++) {
			if (num[i] < maxNum)
				smallNum += num[i] * num[i];
		}
		maxNum = maxNum * maxNum;

		if (maxNum == smallNum) cout << "right" << '\n';
		else cout << "wrong" << '\n';
	}

	return 0;
}
