/*
Authors: Akshay Kuchibhatla and Jackson Curtis
Date: 26 October 2023
Course: CSC 222: Objected-Oriented Programming
*/
#include <iostream>
#include <string>
using namespace std;

// Website with problems: https://www.seminolestate.edu/computers/competition/samples/2016

int reverseNumber(int n) {
    string nString = to_string(n);
    string nStringReversed = "";
    int size = nString.length();
    for (int i = size - 1; i > -1; i--) {
        nStringReversed += nString[i];
    }
    return stoi(nStringReversed);
}

class returnVal {
    public:
        int finalNumber;
        int numberOfIterations;
        bool isLychrel;
};

returnVal isLychrel(int n) {
    returnVal x;
    int iterations = 0;
    while(n != reverseNumber(n)) {
        if (iterations > 10) {
            x.isLychrel = true;
            x.finalNumber = n;
            x.numberOfIterations = iterations;
            return x;
        }
        n += reverseNumber(n);
        iterations++;
    }
    x.isLychrel = false;
    x.finalNumber = n;
    x.numberOfIterations = iterations;
    return x;
}

int main() {
    int input;
    returnVal output;

    while (true) {
        cout << "Enter a number... ";
        cin >> input;
        cout << endl;

        output = isLychrel(input);

        if (output.isLychrel) {
            cout << "Still a Lychrel number after 10 iterations: " << output.finalNumber << endl;
        } else {
            cout << "Not a Lychrel number after " << output.numberOfIterations << " iterations: " << output.finalNumber << endl;
        }
    }

    return 0;
}
