#include <bits/stdc++.h>

using namespace std;

struct Student{
    int id;            // 学号
    int academic_score; // 学业成绩
    int extra_score;    // 素质拓展成绩
    double total_score; // 综合分数
    int getTotal(){
        return academic_score + extra_score;
    }
    void getTotalScore(){
        total_score = academic_score * 0.7 + extra_score * 0.3;
    }
};

bool isExcellent(Student student){
    if(student.getTotal() > 140 && student.academic_score * 7 + student.extra_score * 3 >= 800){
        return true;
    }
    return false;
}

int main(){
    int N;
    cin >> N;
    Student stu;
    for (int i = 0; i <N; i++){
        cin >> stu.id >> stu.academic_score >> stu.extra_score;
        stu.getTotalScore();
        if (isExcellent(stu)) {
            cout << "Excellent" << endl;
        } else {
            cout << "Not excellent" << endl;
        }
    }
    return 0;
}