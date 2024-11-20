#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <iomanip>
using namespace std;

int main() {
    double R1 = 2.0, R2 = 4.0, R3 = 8.0;

    double R0 = 1.0 / (1.0 / R1 + 1.0 / R2 + 1.0 / R3);

    cout << fixed << setprecision(6);
    cout << "R0: " << R0 << endl;

    return 0;
}