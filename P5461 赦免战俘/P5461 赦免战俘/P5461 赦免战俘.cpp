#include<iostream>
int main() {
	int n;
	std::cin >> n;
	int** arr = new int* [n];
	for (int i = 0; i < n; i++) {
		arr[i] = new int[n];
	}
	//初值都为1
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			arr[i][j] = 1;
		}
	}


	//输出数组
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			std::cout << arr[i][j];
			if (j != n - 1) {
				std::cout << " ";
			}
		}
		std::cout << std::endl;
	}
	//释放内存
	for (int i = 0; i < n; i++)
		delete[]arr[i];
	delete[]arr;
	return 0;
}