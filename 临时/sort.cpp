#include <iostream>
#include <algorithm>

using namespace std;

struct Point{
	int x,y,z;
};

int cmp(Point a,Point b){
	return a.z<b.z;	
}

int main(){
	int n;
	cin>>n;
	Point* points=new Point[n];
	for (int i = 0; i < n; i++) {
		cin >> points[i].x >> points[i].y >> points[i].z;
	}
	sort(points,points+n,cmp);
	
	delete[] points;
	return 0;
}
