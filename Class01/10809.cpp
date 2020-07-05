#include <cstdio>
#include <cstring>
using namespace std;

int main() {
	char S[101];
	int arr[26], idx;

	memset(arr, -1, sizeof(arr));

	scanf("%s", S);

	for(int i=0; i<101; i++) {
		if (S[i] == '\0') break;
		else {
			idx = S[i] - 'a';
			if (arr[idx] == -1)
				arr[idx] = i;
		}
	}

	for(int i=0; i<26; i++)
		printf("%d ", arr[i]);

	return 0;
}
