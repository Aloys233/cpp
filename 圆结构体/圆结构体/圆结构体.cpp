#define _USE_MATH_DEFINES
#include<cmath>
#include<iostream>
class circle {
private:
	int r;//边长
public:
	circle(int rr) :r(rr) {};
	int getarea() {
		return M_PI * r * r;
	}
};
int main() {
	int a;
	std::cin >> a;
	circle aaa(a);
	std::cout << aaa.getarea() << std::endl;
	return 0;
}