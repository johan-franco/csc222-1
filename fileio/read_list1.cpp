#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string mystring;
    ifstream myfile("shopping_list.txt");

    if (myfile.is_open()) {
        char mychar;
        while (myfile) {
            mychar = myfile.get();
            cout << mychar;
            cout << ": " << myfile.tellg() << ", ";
        }
    }
}
