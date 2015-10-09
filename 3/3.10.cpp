/* 
10. Write a function OpenFile that accepts as input an ifstream by reference and prompts the user
for the name of a file. If the file can be found, OpenFile should return with the ifstream opened
    to read that file. Otherwise, OpenFile should print an error message and reprompt the user.
    (Hint: If you try to open a nonexistent file with an ifstream , the stream goes into a fail state and you
    will need to use .clear() to restore it before trying again).
*/

#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include <cmath>
#include <fstream>
using namespace std;

void OpenFile() {
    cout << "what is the name of the file? ";
    string input;
    getline(cin, input);
    
    ifstream myStream(input);
    if(!myStream.is_open()) {
        cerr << "Couldn't open file: " << input << endl;
        myStream.clear();
    } else cout << "File: " << input << " opened!" << endl;
}

int main() {
    OpenFile();
    return 0;
}

