#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

const int COLUMN_WIDTH = 10;
const int NUM_COLUMNS = 3;
const int NUM_LINES = 4;


void PrintTableBody() {
    ifstream input("data.txt");
    for (int k = 0; k < NUM_LINES; ++k) {
        int intValue;
        double doubleValue;
        input >> intValue >> doubleValue;

        cout << setw(COLUMN_WIDTH) << (k + 1) << " | ";
        cout << setw(COLUMN_WIDTH) << intValue << " | ";
        cout << setw(COLUMN_WIDTH) << doubleValue << endl;
    }
}

void PrintTableHeader() {
    for (int column = 0; column < NUM_COLUMNS -1; ++column) {
        cout << setfill('-') << setw(COLUMN_WIDTH) << "" << "-+-";
    }
    cout << setw(COLUMN_WIDTH) << "" << setfill(' ') << endl;
}

int main(void) {
    PrintTableHeader();
    PrintTableBody();
    return 0;
}
