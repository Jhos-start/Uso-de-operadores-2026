#include <iostream>
using namespace std;

int main() {
    int A = 5;
    int B = 10;
    int C;

    B = B + 1; 
    C = (A + B) * 2;
    A = A + 1; 
    cout <<"A:"<<A<< ", B: "<<B<<", C: "<<C;

    return 0;
}