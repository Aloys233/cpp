#define _USE_MATH_DEFINES
#include<cmath>
#include<iostream>
int main() {
	class Ring {
	private:
		int innerRadius;
		int outerRadius;
	public:
		Ring(int inner, int outer) : innerRadius(inner), outerRadius(outer) {
			std::cout << "constructor" << std::endl;
		}
		constexpr int getArea()const {
			return M_PI * (outerRadius * outerRadius - innerRadius * innerRadius);
		}
	};
	int a, b;
	std::cin >> a >> b;
	Ring myRing(a, b);
	std::cout << myRing.getArea()<<std::endl;
	Ring eee(1, 3);
	std::cout << eee.getArea();
	return 0;
}