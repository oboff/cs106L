#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <iomanip>
#include <cmath>
using namespace std;

string GetLine() {
    string result;
    getline(cin, result);
    return result;
}

int GetInteger() {
    while (true) {
        int result;
        stringstream converter;
        converter << GetLine();
        if(converter >> result) {
            char remaining;
            if(converter >> remaining)
                cout << "too many chars. try again." << endl;
            else
                return result;
        } else        
            cout << "retry: ";
    }
}

bool HasHexLetters(int myInt) {
    bool HasHex = false;
    int pow16;
    int result = myInt;
    for(int i=0; pow(16, i) <= myInt; ++i) {
        pow16 = i;
    }
    for(int i=pow16; myInt > 0; i--) {
        cout << "myInt: " << myInt << endl;
        int coeff = (int)(myInt/pow(16,i));
        cout << "coeff: " << myInt << "/" << "pow(16, " << i << ")" << " = " << coeff << endl;
        if(coeff>9) return HasHex = true;
        cout << "delta: " << myInt;
        myInt = myInt - (coeff*pow(16,i));
        cout << " - (" << coeff << "*" << pow(16,i) << ") = " << myInt << endl;

    }

    return HasHex;
}

int main() {
    while(true) {
        cout <<  "Enter a number: ";
        int myInt = GetInteger();
        cout << setw(10) << "Alpha:" << setw(10) <<  boolalpha << HasHexLetters(myInt) << endl;
        cout << setw(10) << "Dec:" << setw(10) << dec << myInt << dec << endl;
        cout << setw(10) << "Hex:" << setw(10) << hex << myInt << dec << endl;

    }
    return 0;
}
