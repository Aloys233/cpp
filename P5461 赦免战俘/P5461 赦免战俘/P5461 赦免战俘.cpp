	#include<iostream>
	int main() {
		int n;
		std::cin >> n;
		int matrixSize = 1 << n;
		int** arr = new int* [matrixSize];
		for (int i = 0; i < matrixSize; i++) {
			arr[i] = new int[matrixSize]();
		}
		for (int y = 0; y < matrixSize; ++y) {
			for (int x = 0; x < matrixSize; ++x) {
				int bit = 0;
				for (int k = 0;k<matrixSize; ++k) {
					if ((x & (1 << k)) && (y & (1 << k))) {
						bit = 1;
						break;
					}
				}
				arr[y][x] = bit;
			}
		}
		for (int i = 0; i < matrixSize; i++) {
			for (int j = 0; j < matrixSize; j++) {
				std::cout << arr[i][j] << " ";
			}
			std::cout << std::endl;
		}
		for (int i = 0; i < matrixSize; i++) {
			delete[] arr[i];
		}
		delete[] arr;
		return 0;
	}