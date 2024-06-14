#include <iostream>

using namespace std;

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};
int sum = 0;
int a[10086][10086];

void aaa(int sx, int sy, int ex, int ey) {
	if (sx == ex && sy == ey) {
		sum++;
		return;
	}
	int i;
	for (i = 0; i < 4; i++) {
		int tx = sx + dx[i];
		int ty = sy + dy[i];
		if (a[tx][ty] == 1) {
			a[sx][sy] = 0;
			aaa(tx, ty, ex, ey);
		}
	}
}

int main() {
	int N, M, T;
	cin >> N >> M >> T; //迷宫长、宽、障碍数
	int sx, sy, fx, fy;
	cin >> sx >> sy >> fx >> fy; //起点坐标和终点坐标
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= M; j++) {
			a[i][j] = 1;
		}
	}
	int t1, t2;
	for (int i = 1; i <= T; i++) {
		cin >> t1 >> t2;
		a[t1][t2] = 0;
	}
	aaa(sx, sy, fx, fy);
	cout << sum;
	return 0;
}
