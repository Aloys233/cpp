#include <iostream>
#include <cmath>
#include <algorithm>
#include <iomanip>
using namespace std;

struct Point {
	int x, y, z;
};

bool HeightCompare(const Point& a, const Point& b) {
	return a.z < b.z;
}

double Distance(const Point& a, const Point& b) {
	return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2) + pow(a.z - b.z, 2));
}

int main() {
	int n;
	cin >> n;
	Point* points = new Point[n];
	for (int i = 0; i < n; i++) {
		cin >> points[i].x >> points[i].y >> points[i].z;
	}
	sort(points, points + n, HeightCompare);
	double total = 0.0;
	for (int i = 1; i < n; i++) {
		total += Distance(points[i - 1], points[i]);
	}
	cout << fixed << setprecision(3) << total;
	delete[] points;
	return 0;
}