#include <iostream>

using namespace std;

int main() {
    int N, M, A;
    cin >> N >> M >> A;

    if (N != M && N != A && M != A) {
        cout << "ELLA NO TE AMA" << endl;
    } else {
        cout << "ELLA TE AMA" << endl;
    }

    return 0;
}
