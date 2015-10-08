#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
    cout << setw(10) << "Hello!" << setw(10) << "Hoy!" << endl;
    cout << left << '[' << setw(10) << "Hello!" << setw(10) << "Hoy!" << ']' << endl;
    cout << right << '[' << setw(10) << "Hello!" << setw(10) << "Hoy!" << ']' << endl;
    cout << right << '[' << setfill('-') << setw(10) << "Hello!" << setw(10) << "Hoy!" << ']' << endl;
    cout << right << '[' << setw(10) << "Hello!" << setw(10) << "Hoy!" << ']' << endl;
}

