#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    const double pi = 3.14;
    double L;
    cout << "L: ";
    cin >> L;
    system("cls");
    double R = L / (2 * pi);
    double S = pi * pow(R, 2);
    cout << "R: " << R << endl;
    cout << "S: " << S << endl;
    return 0;
}