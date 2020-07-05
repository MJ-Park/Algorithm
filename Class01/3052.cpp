#include <iostream>
using namespace std;

int main() {
	int res[42] = {0,};
	int num[10];
	int rem, result=0;

	for (int i=0; i<10; i++) {
		cin >> num[i];
		rem = num[i] % 42;
		res[rem]++;
	}

	for (int i=0; i<42; i++) {
		if(res[i]>0) result++;
	}

	cout << result;

	return 0;
}
