#include <iostream>
using namespace std;

int main() {
    int A = 7, B = 3;
    int C = ++A + B--;
    cout << "A: " << A << ", B: " << B << ", C: " << C << endl;
    return 0;
}