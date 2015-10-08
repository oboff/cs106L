#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    string myFile;
    string myContents;

    cout << "Enter a filename: " << endl;
    //cin >> myFile;
    ifstream myStream("catT.txt");
    if(!myStream.is_open())
        cerr << "Couldn't open filename." << endl;    
    myStream >> myContents;
    cout << myContents << endl;
    cout << myContents << endl;
}
