// 대각선 계산 X. 최단거리 -> 상하좌우 직선

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	double x,y,w,h;
	double garo, sero;

	cin >> x >> y >> w >> h;

	if (x >= w/2) garo = w;
	else garo = 0;

	if (y >= h/2) sero = h;
	else sero = 0;
	
	if (abs(garo-x) > abs(sero-y))
		cout << abs(sero-y);
	else cout << abs(garo-x);

	return 0;
}
	
