#include <iostream>

using namespace std;

class Student {
public:
    string name;
    int age;
    string gender;
    int score;
    void introduceSelf() {
        cout << "�ҽУ�" << name << "������" << age << "�꣬�Ա���" << gender << "����" << score << "��";
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
