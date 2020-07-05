#include <cstdio>
#include <algorithm>
#define MAX_LEN 1000001
using namespace std;

int main() {
	char str[MAX_LEN];
	int countArr[26] = {0,}, maxVal=0, res;

	scanf("%s", str);

	for (int i=0; i<MAX_LEN; i++) {
		if (str[i] == '\0') {
			
			break;
		}
		
		if (str[i] > 'A' || str[i] < 'Z')
			countArr[str[i]-'A']++;
		else countArr[str[i]-'a']++;
	}
	
	for (int i=0; i<26; i++) {
		if (maxVal < countArr[i]) {
			maxVal = countArr[i];
			res = i;
		}
	}
	
	for (int i=0; i<26; i++) {
		if ( (maxVal == countArr[i]) && (i != res))
			printf("?");
			return 0;
	}
	printf("%c", 'A'+res);

	return 0;
}
