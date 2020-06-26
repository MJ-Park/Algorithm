#include <bits/stdc++.h>
using namespace std;

int main() {
	string str;
	int res=1;
	getline(cin, str);
	
	for(int i=0; i<1000000; i++) {
		if(i>0){
			if(str[i] == ' ') res++;
		}
		if(str[i] == '\0') {
			if (str[i-1] == ' ') res--;
			break;
		}
	}

	cout << res;

	return 0;
}
