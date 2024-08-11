#include <iostream>
#include <algorithm>

using namespace std;

struct Student {
	string name;
	int Chinese=0;
	int Math=0;
	int English=0;
};

struct RivalPair {
	string first;
	string second;
};

bool comparePairs(const RivalPair& a, const RivalPair& b) {
	// 如果第一个名字不同，则按第一个名字排序
	if (a.first != b.first) {
		return a.first < b.first;
	}
	else {
		// 如果第一个名字相同，则按第二个名字排序
		return a.second < b.second;
	}
}

bool IsMatched(Student& a, Student& b) {
	int chinese_diff = abs(a.Chinese - b.Chinese);
	int math_diff = abs(a.Math - b.Math);
	int english_diff = abs(a.English - b.English);
	int total_diff = abs((a.Chinese + a.Math + a.English) - (b.Chinese + b.Math + b.English));
	return chinese_diff <= 5 && math_diff <= 5 && english_diff <= 5 && total_diff <= 10;
}

int main() {
	int n;
	cin >> n;
	Student stu[1000];
	RivalPair rivals[500000];
	int rivalCount = 0;
	for (int i = 0; i < n; i++) {
		cin >> stu[i].name >> stu[i].Chinese >> stu[i].Math >> stu[i].English;
	}
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (IsMatched(stu[i], stu[j])) {
				if (stu[i].name < stu[j].name) {
					rivals[rivalCount].first = stu[i].name;
					rivals[rivalCount].second = stu[j].name;
				}
				else {
					rivals[rivalCount].first = stu[j].name;
					rivals[rivalCount].second = stu[i].name;
				}
				rivalCount++;
			}
		}
	}
	sort(rivals, rivals + rivalCount, comparePairs);
	for (int i = 0; i < rivalCount; i++) {
		cout << rivals[i].first << " " << rivals[i].second << endl;
	}
	return 0;
}
