#include<iostream>

using namespace std;

class Box
{
public:
	double length;
	double breadth;
	double height;
	double get(void);
	void set(double len, double bre, double hei);
};

double Box::get(void) {
	return length * breadth * height;
}

void Box::set(double len, double bre, double hei) {
	length = len;
	breadth = bre;
	height = hei;
}

int main() {
	Box box1;
	Box box2;
	Box box3;
	double v = 0;//体积

	box1.height = 5.0;
	box1.length = 6.0;
	box1.breadth = 7.0;

	box2.height = 10.0;
	box2.length = 12.0;
	box2.breadth = 13.0;

	v = box1.height * box1.length * box1.breadth;
	cout << "Box1 的体积：" << v << endl;

	v = box2.height * box2.length * box2.breadth;
	cout << "Box2 的体积：" << v << endl;

	box3.set(16.0, 8.0, 12.0);
	v = box3.get();
	cout << "Box3 的体积：" << v << endl;

	return 0;
}