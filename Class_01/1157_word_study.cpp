#include <bits/stdc++.h>
using namespace std;

// ASCII value
// A = 65, Z = 90
// a = 97, z = 122

#define MAX 1000001
char inputChar[MAX];
int res[26] = {0,};
int maxCount = -1;

void solve() {
	for(int i=0; i<MAX;i++) {
		// Breaking Rule
		if(inputChar[i] == '\0') break;
		
		// Check alphabet
		int tmp = inputChar[i];
		if (tmp>=65 && tmp<=90) res[tmp-65]++;
		else if(tmp>=97 && tmp<=122) res[tmp-97]++;
	}
	
	int maxValue = *max_element(res,res+26);
	// Check duplicate value
	for(int j=0;j<26;j++) {
		if(res[j] == maxValue) {
			if(maxCount == -1) maxCount = j;
			else {
				maxCount = -2;
				break;
			}
		}
	}
	if(maxCount == -2) cout << "?";
	else {
		char resChar = maxCount + 65;
		cout << resChar;
	}
}

int main() {
	cin.getline(inputChar,MAX-1);
	solve();

	return 0;
}
