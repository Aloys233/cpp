#include <stdio.h>
#include <Windows.h>

int main() {
	system("color 0c");
	float x, y, a;
	for (y = 1.5f; y > -1.5f; y -= 0.1f) {
		for (x = -1.5f; x < 1.5f; x += 0.05f) {
			a = x * x + y * y - 1;
			putchar(a * a * a - x * x * y * y * y <= 0.0f ? '*' : ' ');
		}
		Sleep(15);
		putchar('\n');
	}
	printf("萧逸\n");
	return 0;
}

