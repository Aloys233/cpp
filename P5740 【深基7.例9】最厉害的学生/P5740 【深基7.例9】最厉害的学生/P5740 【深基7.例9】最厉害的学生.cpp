#include <iostream>

using namespace std;

struct Student {
    string name;
    int chinese;
    int math;
    int english;
    int total;
};

int main() {
    int N;
    cin >> N;
    Student stu[10086];
    for (int i = 0; i < N; i++) {
        cin >> stu[i].name >> stu[i].chinese >> stu[i].math >> stu[i].english;
        stu[i].total = stu[i].chinese + stu[i].math + stu[i].english;
    }
    int maxIndex = 0;
    for (int i = 1; i < N; ++i) {
        if (stu[i].total > stu[maxIndex].total) {
            maxIndex = i;
        }
    }
    cout << stu[maxIndex].name << ' ' << stu[maxIndex].chinese << ' ' << stu[maxIndex].math << ' ' << stu[maxIndex].english;
	return 0;
}