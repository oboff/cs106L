#include <sstream>
#include <iostream>
using namespace std;

int main() {
    int levelNum = 10;
    stringstream messageText;

    messageText << "Level " << levelNum << " is out of bounds.";
    cout << (messageText.str()) << endl;
}

