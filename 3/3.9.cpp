/*
9. Although the console does not naturally lend itself to graphics programming, it is possible to draw
rudimentary approximations of polygons by printing out multiple copies of a character at the
proper location. For example, we can draw a triangle by drawing a single character on one line,
then three on the next, five on the line after that, etc. For example:
#
###
#####
#######
#########
Using the setw and setfill stream manipulators, write a function DrawTriangle that takes in
an int corresponding to the height of the triangle and a char representing a character to print,
then draws a triangle of the specified height using that character. The triangle should be aligned so
that the bottom row starts at the beginning of its line.
*/

#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include <cmath>
using namespace std;

void DrawTriangle(int ht, string fill) {
    string fill1 = fill;
    string fill2 = fill;
    int k = 0;
    int n = 4;
    cout << left << setw(n) << k;
    k++;
    cout << right << setw(ht+n+2) << fill << endl;
    for(int i=1; i < ht; i++) {
        cout << left << k << setw(n) << "";
        cout << right << setw(ht+n) << fill2;
        cout << fill;
        cout << fill2 << endl;
        fill2 = fill2 + fill;
        k++;
    }
}

int main() {
    while(true) {
        int myHeight;
        string myFiller; 
        stringstream converter;
        
        cout << "Enter int height and char filler: ";
        string input;//GetLine();
        getline(cin, input);
        converter << input;
        converter >> myHeight >> myFiller;
        cout << "myHeight: " << myHeight << endl;
        cout << "myFiller: " << myFiller << endl << endl;
        DrawTriangle(myHeight, myFiller);

        return 0;
    }
}

