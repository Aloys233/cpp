#include<iostream>

static int is_prime(int num) {
    if (num < 2) {
        return 0; //不是素数
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; //不是素数
        }
    }
    return 1; //是素数
}

int main() {
	int N;
	std::cin >> N;
	for (int i = 4; i <= N; i+=2) {
        std::cout << i << "=";
		for (int j = 2; j <= i / 2; j++) {
            if (is_prime(j) && is_prime(i - j)) {
                std::cout << j << "+" << i - j << std::endl;
                break;
            }
		}
	}
	return 0;
}