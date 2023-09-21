#include <iostream>
#include <string>
using namespace std;

string backwards(string s) {
    string reversed = s;
    int last = s.length() - 1;

    for (int i = 0; i <= last; i++) {
	reversed[i] = s[last - i];
    }

    return reversed;
}


int main() {
    string state = "Mississippi";
    
    cout << state << " backwards is " << backwards(state) << ".\n"; 

    return 0;
}
