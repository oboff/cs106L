#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include <cmath>
#include <fstream>
using namespace std;

int factorial(int num) {
    if (num == 0) return 1;
    return num * factorial(num - 1);
}

string GetLine() {
    string input;
    getline(cin, input);
    return input;
}

int main() {
    int myInt;
    stringstream result;
    result << GetLine();
    if(result >> myInt)
        cout << factorial(myInt) << endl;
    return 0;
}

