#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

int PrintGov() {
    cout << "43" << endl;
}

int main() {
    PrintGov();
    void PrintGeb() { cout << "OK" << endl; }
    PrintGeb();
    return 0;
}
