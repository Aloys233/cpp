#include<iostream>
#include<cstdlib>
#include<ctime>
int main() {
	srand((int)time(NULL));
	for (int i = 0; i < 10; i++)
	{
		std::cout << rand() % 100 << " ";
	}
	return 0;
}