#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

int main() {

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    cout << "Name       : ";
    SetConsoleTextAttribute(hConsole, 14);
    cout << "\"The war and the peace\"" << std::endl;
    SetConsoleTextAttribute(hConsole, 7);
    cout << "Avtor      :   L.N. Tolstoj" << endl;
    cout << "Izdatelstvo:  Piter" << endl;
    cout << "Pages      : ";
    SetConsoleTextAttribute(hConsole, 5);
    cout << "500" << endl;
    return 0;
}