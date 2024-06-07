#include <iostream>
#include <cmath>

using namespace std;

struct Student {
    int chinese;
    int math;
    int english;
};

bool IsMatched(const Student& a, const Student& b) {
    int chinese_diff = abs(a.chinese - b.chinese);
    int math_diff = abs(a.math - b.math);
    int english_diff = abs(a.english - b.english);
    int total_diff = abs((a.chinese + a.math + a.english) - (b.chinese + b.math + b.english));

    return chinese_diff <= 5 && math_diff <= 5 && english_diff <= 5 && total_diff <= 10;
}

int main() {
    int N;
    cin >> N;

    Student students[1000];

    for (int i = 0; i < N; ++i) {
        cin >> students[i].chinese >> students[i].math >> students[i].english;
    }

    int count = 0;

    for (int i = 0; i < N; ++i) {
        for (int j = i + 1; j < N; ++j) {
            if (IsMatched(students[i], students[j])) {
                ++count;
            }
        }
    }

    cout << count << endl;

    return 0;
}
