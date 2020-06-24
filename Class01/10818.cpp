#include <iostream>
#include <algorithm>
using namespace std;

#define MIN_VAL -1000000
#define MAX_VAL 1000000

int main() {
	ios::sync_with_stdio(false);
	int N;
	int arr[1000000];
	int min = MAX_VAL;
	int max = MIN_VAL;

	cin >> N;
	if (N<1 || N>1000000) return 1;
	
	for(int i=0; i<N; i++)
		cin >> arr[i];
	
	for(int i=0; i<N; i++) {
		if(arr[i] >= max) max = arr[i];
		if(arr[i] <= min) min = arr[i];
	}

	cout << min << " " << max;
	return 0;
}
