#include <fstream>
#include <sstream>
#include <iostream>
using namespace std;

string GetLine() {
    string result;
    getline(cin, result);
    return result;
}

bool GetBoolean() {
    while(true) {
        stringstream converter;
        bool result;
        
        converter << boolalpha << GetLine();
        if(converter >> result) {
            char remaining;
            if(converter >> remaining)
                cout << "Too many characters: " << remaining << endl;
            else
                return result;
        } else 
            cout << "Retry: ";
    }
}
    
int main() {
    GetBoolean();
    return 0;
}
