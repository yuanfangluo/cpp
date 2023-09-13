#include "iostream"
using namespace std;
struct Animal {
   virtual void speak(){
        cout << "animal speak" << endl;
    }
};

struct Cat : Animal {
    void speak() {
        Animal::speak();
        cout << "Cat speak" << endl;
    }
};

int main() {
    Cat *cat = new Cat();

    cat->speak();
    return 0;
}