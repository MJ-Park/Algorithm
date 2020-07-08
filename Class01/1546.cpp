#include <cstdio>
using namespace std;

int main() {
	int M=0, N;
	double score[1000];
	double mean=0;
	scanf("%d", &N);

	for (int i=0; i<N; i++) {
		scanf("%lf", &score[i]);
		if (score[i] > M) M = score[i];
	}

	for (int i=0; i<N; i++) {
		score[i] = score[i]/M*100;
		mean += score[i];
	}
	
	mean = mean/N;
	printf("%lf", mean);

	return 0;
}
