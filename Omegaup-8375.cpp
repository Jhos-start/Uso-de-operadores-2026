#include <iostream>

using namespace std;

int main() {
    int A, B;
    cin >> A;
    cin >> B;

    if (A > B) {
        cout << "El negocio si va a jalar" << endl;
        cout << A - B << endl;
    } else {
        cout << "Dejalo ya esta muerto" << endl;
        cout << B - A << endl;
    }

    return 0;
}
