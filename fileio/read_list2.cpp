#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string myline;
    ifstream myfile("shopping_list.txt");

    if (myfile.is_open()) {
        while (myfile) {
            getline(myfile, myline);
            if (!myfile.eof()) {
                cout << myline << ": " << myfile.tellg() << endl;
            }
        }
    }
}
