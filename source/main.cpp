#include <iostream>
using namespace std;


struct Person {
    int m_age;
    int m_height;

    // Person(int age, int height) {
    //     m_age = age;
    //     m_height = height;
    // }

    // 初始化列表,
    Person(int age = 0, int height = 0);
};

Person::Person(int age, int height) :m_age(age), m_height(height) {}


int main() {

    cout << "hello world" << endl;

    Person p = Person(18, 170);

    cout << p.m_age << endl;

    return 0;
}