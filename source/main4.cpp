#include "iostream"
using namespace std;

class Rocket {
private:
    Rocket(){}
    ~Rocket() {}
    static Rocket *ms_rocket;
public:
    static Rocket *sharedRocket() {
        if (ms_rocket == NULL) {
            ms_rocket = new Rocket();
        }
        return ms_rocket;
    }

    static void deleteRocket() {
        if (ms_rocket != NULL) {
            delete ms_rocket;
            ms_rocket = NULL;
        }
    }

    void run() {
        cout << "rocket run" << endl;
    }

};

Rocket* Rocket::ms_rocket = NULL;

int main() {
    Rocket *p1 = Rocket::sharedRocket();
    Rocket *p2 = Rocket::sharedRocket();

    cout << p1 << endl;
    cout << p2 << endl;

    return 0;
}