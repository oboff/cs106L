#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

int main(void) {
    ifstream capitals("world-capitals.txt");
    if(!capitals.is_open()) {
        cerr << "Cannot find file world-capitals.txt" << endl;
        return -1;
    }

    string capital, country;
    while (getline(capitals, capital) && getline(capitals, country))
        cout << capital << " is the capital of " << country << endl;
}

