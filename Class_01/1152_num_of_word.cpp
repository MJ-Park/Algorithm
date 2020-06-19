#include <bits/stdc++.h>
using namespace std;
#define MAX 1000000
char inputChar[MAX];
int res=0;
bool spacebar=0;
void solve() {
	for(int i=0; i<MAX; i++) {
		if(i==0) res++;
		else if(inputChar[i]=='\0') {
			if (inputChar[i-1] == ' ') res--;
			break;
		}
		else if(inputChar[i]==' ') res++;
	}
	cout << res;
}

int main() {
	cin.getline(inputChar,MAX);
	solve();

	return 0;
}
