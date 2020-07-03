#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	int A,B,C,num,remainder;
	int res[10]={0,};
	cin >> A >> B >> C;
	
	num = A*B*C;
	remainder = num % 10;
	res[remainder]++;

	while(1) {
		num = num/10;
		if ( num==0 ) break;
		else {
			remainder = num%10;
			res[remainder]++;
		}
	}

	for (int i=0; i<10; i++) printf("%d\n",res[i]);

	return 0;
}
