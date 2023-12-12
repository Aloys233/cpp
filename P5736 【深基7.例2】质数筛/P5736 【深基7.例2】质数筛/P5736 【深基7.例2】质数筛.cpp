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
	std::cin >> N;//个数
	int* arr = new int[N];
    int count = 0;
	for (int i = 0; i < N; i++) {
        int temp;
        std::cin >> temp;
        if (is_prime(temp)) {
            arr[count] = temp;
            count++;
        }
	}
    for (int i = 0; i < count; i++) {
        std::cout << arr[i] << " ";
    }
    delete[] arr;
	return 0;
}