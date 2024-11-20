#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double v,t,a;
    cout << "v: ";
    cin >> v;

    cout << "t: ";
    cin >> t;

    cout << "a: ";
    cin >> a;

    double S = v * t * a;

    cout << S << endl;
}