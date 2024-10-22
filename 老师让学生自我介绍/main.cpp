#include <iostream>

using namespace std;

class Student {
public:
    string name;
    int age;
    string gender;
    int score;
    void introduceSelf() {
        cout << "我叫：" << name << "，今年" << age << "岁，性别是" << gender << "考了" << score << "分";
    }
};

class Teacher{
public:
    string name;
    void makeIntroduce(Student s){
        s.introduceSelf();
    }
};

int main() {
    Student xiaoming;
    xiaoming.name="xiaoming";
    xiaoming.gender="male";
    xiaoming.age=18;
    xiaoming.score=100;
    Teacher laowang;
    laowang.makeIntroduce(xiaoming);
    return 0;
}
