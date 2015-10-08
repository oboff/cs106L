#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    int myInt = 1;
    while(myInt) {
        cout << "Enter a number: ";
        cin >> myInt;
        cout << myInt << " as Dec: "<< dec << myInt << dec << endl;
        cout << myInt << " as Oct: "<< oct << myInt << dec << endl;
        cout << myInt << " as Hex: "<< hex << myInt << dec << endl;        
    }
    return 0;
}
