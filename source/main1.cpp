#include <iostream>
using namespace std;

struct Person {
    int m_age;
    int m_height;

    Person() :Person(10, 20) {
        
    }

    Person(int age, int height) {
        m_age = age;
        m_height = height;
    }
};


int main() {

    Person p;

    cout << p.m_age << endl;

    return 0;
}