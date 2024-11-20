#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

int main() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 14);
    cout << "\"U lukomor'a dub zelenij,\n"
            " Zlataya zep na dupe tom,\n"
            " I dnem i nochju kot uchenij\n"
            " vse hodit po cepi krugom\"" << endl;
    return 0;
}