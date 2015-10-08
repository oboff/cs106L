#include <fstream>
#include <sstream>
#include <iostream>
using namespace std;

string GetLine() {
    string result;
    getline(cin, result);
    return result;
}

int GetInteger() {
    while(true) {
        stringstream converter;
        int result;

        converter << GetLine();
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
    GetInteger();
    return 0;
}
