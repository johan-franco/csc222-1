#include <iostream>
#include <string>
using namespace std;

int count_letters(string s, char letter) {
    int count = 0;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == letter) {
            count++;
        }
    }
    return count;
}

int main() {
    string state = "Mississippi";
    
    cout << "The letter i occurs " << count_letters(state, 'i');
    cout << " times in " << state << ".\n";

    return 0;
}
