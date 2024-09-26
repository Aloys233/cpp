#include <iostream>
#include <sstream>
#include <iomanip>
#include <random>
#include <ctime>

using namespace std;

int getNumberInput() {
	int input = 0;
	cin >> input;
	while (cin.fail())
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cin >> input;
	}
	return input;
}

void sortBalls(int* balls) {
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6 - i - 1; j++) {
			if (balls[j] > balls[j + 1]) {
				int tmp = balls[j];
				balls[j] = balls[j + 1];
				balls[j + 1] = tmp;
			}
		}
	}
}

int* getCustomBalls() {
	int* balls =new int[7];
	input_red_balls:
	cout << "����6��������룺";
	for (int i = 0; i < 6; i++) {
		balls[i] = getNumberInput();
	}
	sortBalls(balls);
	if (balls[0] < 1 || balls[5] > 33) {
		cout << "����Խ��!" << endl;
		goto input_red_balls;
	}
	for (int i = 0; i < 5; i++) {
		if (balls[i] == balls[i + 1]) {
			cout << "�����ظ���" << endl;
			goto input_red_balls;
		}
	}
	input_blue_balls:
	cout << "����1��������룺";
	balls[6] = getNumberInput();
	if (balls[6] > 16 || balls[6] < 1) {
		cout << "����Խ��!" << endl;
		goto input_blue_balls;
	}
	return balls;
}

int* getRandomBalls() {
	int* balls = new int[7];
	int datapool[33];
	for (int i = 0; i < 33; i++) {
		datapool[i] = i + 1;
	}
	for (int i = 0; i < 6; i++) {
		int randomIndex = rand() % (33 - i);
		balls[i] = datapool[randomIndex];
		datapool[randomIndex] = datapool[32 - i];
	}
	sortBalls(balls);
	balls[6] = rand() % 16 + 1;
	return balls;
}

string descBalls(int* balls) {
	stringstream ss;
	ss << "����";
	for (int i = 0; i < 7; i++) {
		ss << setw(2) << setfill('0') << balls[i];
		if (i < 5) {
			ss << "��";
		}
		else if (i == 5) {
			ss << "������";
		}
	}
	return ss.str();
}

int getTicketLevel(int* userBalls,int* systemBalls) {
	int redCount = 0;
	int blueCount = 0;
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			if (userBalls[i] == systemBalls[j]) {
				redCount++;
				break;
			}
		}
	}
	blueCount = userBalls[6] == systemBalls[6];
	if (redCount == 6&&blueCount==1) {
		return 1;
	}
	else if (redCount == 6 && blueCount == 0) {
		return 2;
	}
	else if (redCount == 5 && blueCount == 1) {
		return 3;
	}
	else if (redCount + blueCount == 5) {
		return 4;
	}
	else if (redCount + blueCount == 4) {
		return 5;
	}
	else if (blueCount == 1) {
		return 6;
	}
	return 7;
}

int getMoney(int level) {
	switch (level) {
		case 1:
			return 5000000;
		case 2:
			return 800000;
		case 3:
			return 3000;
		case 4:
			return 200;
		case 5:
			return 10;
		case 6:
			return 5;
		case 7:
			return 0;
		default:
			break;
	}
}

void playGame() {
	int userChoice;
	bool flag = true;
	while (flag) {
		cout << "**********************************"<<endl;
		cout << "����������ѡ��" << endl;
		cout << "1.��ѡ����" << endl;
		cout << "2.��ѡ����" << endl;
		cout << "3.�˳�" << endl;
		cout << "**********************************" << endl;
		userChoice = getNumberInput();
		int* userBalls = nullptr;
		switch (userChoice)
		{
			case 3:
				flag = false;
				break;
			case 1:
				userBalls = getCustomBalls();
				break;
			case 2:
				userBalls = getRandomBalls();
				break;
			default:
				continue;
		}
		cout << "�û�ѡ����ǣ�" << descBalls(userBalls) << endl;
		int* systemBalls = getRandomBalls();
		cout << "�н��ĺ����ǣ�" << descBalls(systemBalls) << endl;
		int level = getTicketLevel(userBalls, systemBalls);
		int money = getMoney(level);
		if (level == 7) {
			cout << "δ�н���";
		}
		else {
			cout << "����" << level << "�Ƚ�" << money << "Ԫ" << endl;
		}
		system("pause");
		system("cls");
	}
}

int main() {
	srand(time(nullptr));
	playGame();
	return 0;
}