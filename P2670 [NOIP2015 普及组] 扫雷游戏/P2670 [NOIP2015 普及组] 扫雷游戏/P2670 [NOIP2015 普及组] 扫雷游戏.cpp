#include <iostream>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	int dx[8] = { -1,1,0,0,-1,-1,1,1 };
	int dy[8] = { 0,0,-1,1,-1,1,-1,1 };
	char str[100][100];
	int result[100][100];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> str[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (str[i][j] == '*') {
				result[i][j] = -1;
			}else {
				result[i][j] = 0;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (str[i][j] == '*') {
				continue;
			}
			int count = 0;
			for (int k = 0; k < 8; k++) {
				int ni = i + dx[k];
				int nj = j + dy[k];
				if (ni >= 0 && ni < n && nj >= 0 && nj < m && str[ni][nj] == '*') {
					count++;
				}
			}
			result[i][j] = count;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (result[i][j] == -1) {
				cout << '*';
			}
			else {
				cout << result[i][j];
			}
		}
		cout << endl;
	}
	return 0;
}
