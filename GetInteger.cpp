#include <sstream>
#include <iostream>
#include <string>
using namespace std;

string GetLine() {
    string result;
    getline(cin, result);
    return result;
}

int GetInteger() {
    while (true) {
        stringstream converter;
        converter << GetLine();

        int result;
        if(converter >> result) {
            char remaining;
            if(converter >> remaining)
                cout << "Unexpected char: " << remaining << endl;
            else
                return result;
        } else
            cout << "Please enter an integer." << endl;

        cout << "Retry: ";
    }
}

int main() {
    cout << "Enter an integer: " << endl;
    GetInteger();
    return 0;
}

