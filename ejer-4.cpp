#include <iostream>
using namespace std;

int main() {
    int Y = 4;
    int X = 4;

    Y = X + 1; 
    X = X + 1; 
    X = X + (Y + 1);
    Y = Y + 1;
    cout <<"X:"<<X<< ", Y: "<<Y;

    return 0;
}