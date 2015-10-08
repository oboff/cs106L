#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
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
    if(myInt%16 > 9)
        return true;
    else
        return false;           
}

int main() {
    while(true) {
        int myInt = GetInteger();
        cout << "Dec: " << dec << myInt << endl;
        cout << "Hex: " << hex << myInt << endl;
        cout << "Mod16: " << dec << (myInt%16) << endl;
        cout << "Has alpha char? " << boolalpha << HasHexLetters(myInt) << endl;
    }
    return 0;
}
